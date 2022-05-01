//
// Created by Mateusz Wygonny on 17/12/2021.
//

#include "D9.h"

int D9::solveFirst(std::string fileName) {
    std::vector<std::string> data = Reader::getFile(fileName);
    std::vector<std::vector<int>> parsedData = parseData(data);
    int sumLowPoints = getSumLowPoints(parsedData);
    return sumLowPoints;
}
int D9::getSumLowPoints(std::vector<std::vector<int>> data) {
    int result = 0;
    for(int i = 0; i < data.size(); i++){
        for(int j = 0; j < data[i].size(); j++){
            if(isLowPoint(i,j, data)){
                result += data[i][j] + 1;
            }
        }
    }
    return result;
}
bool D9::isLowPoint(int y, int x, std::vector<std::vector<int>> &data) {
    int maxY = data.size()-1;
    int maxX = data[0].size()-1;
    int currentValue = data[y][x];
    if(y - 1 >= 0 && data[y-1][x] <= currentValue){
        return false;
    }
    if(x -1 >= 0 && data[y][x-1] <= currentValue){
        return false;
    }
    if(y+1 <= maxY && data[y+1][x] <= currentValue){
        return false;
    }
    if(x+1 <= maxX && data[y][x+1] <= currentValue){
        return false;
    }
    return true;
}
int D9::solveSecond(std::string fileName) {
    std::vector<std::string> data = Reader::getFile(fileName);
    std::vector<std::vector<int>> parsedData = parseData(data);
    std::vector<int> maxBasins = getMaxBasins(parsedData);
    return maxBasins[0]*maxBasins[1]*maxBasins[2];
}
std::vector<int> D9::getMaxBasins(std::vector<std::vector<int>> &data) {
    std::vector<int> result = {};
    for(int i = 0; i < data.size(); i++){
        for(int j = 0; j < data[i].size(); j++){
            if(isLowPoint(i,j, data)){
                result.push_back(getBasinSize(i,j, data));
            }
        }
    }
    std::sort(result.begin(), result.end());

    return std::vector<int>(result.end()-3,result.end());
}
int D9::getBasinSize(int y, int x, std::vector<std::vector<int>> &data) {
    int maxY = data.size()-1;
    int maxX = data[0].size()-1;
    if(y < 0 || y > maxY || x < 0 || x > maxX){
        return 0;
    }
    else{
        if (data[y][x] == 9 || data[y][x] == -1){
            return 0;
        }else{
            data[y][x] = -1;
            return 1 +
            getBasinSize(y+1, x, data) +
            getBasinSize(y, x+1, data) +
            getBasinSize(y-1, x, data) +
            getBasinSize(y, x-1, data);
        }
    }
}
std::vector<std::vector<int>> D9::parseData (std::vector<std::string> data){
    std::vector<std::vector<int>> result = {};
    for(std::string row : data){
        std::vector<int> numRow = {};
        for(char digit : row){
            numRow.push_back(digit - '0');
        }
        result.push_back(numRow);
    }
    return result;
}