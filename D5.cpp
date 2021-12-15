//
// Created by Mateusz Wygonny on 15/12/2021.
//

#include "D5.h"
#include "Reader.h"
int D5::solveFirst(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::pair<int, int>> readings = parseData(rawData);
    int overlaps = findOverlaps(readings, false);
    return overlaps;
}
std::vector<std::pair<int, int>> D5::parseData(std::vector<std::string> rawData) {
    std::vector<std::pair<int,int>> result = {};
    int currReadings[4] = {};
    for(std::string reading : rawData){
        int currPos = 0;
        std::string currNum = "";
        for(char character : reading){
            if(isdigit(character)){
                currNum += character;
            }else{
                if(currNum != ""){
                    currReadings[currPos] = std::stoi(currNum);
                    currPos ++;
                    currNum = "";
                }
            }
        }
        currReadings[currPos] = std::stoi(currNum);
        result.push_back(std::make_pair(currReadings[0], currReadings[1]));
        result.push_back(std::make_pair(currReadings[2], currReadings[3]));
    }
    return result;
}
int D5::findOverlaps(std::vector<std::pair<int, int> > readings, bool includeDiagonal) {
    std::vector<std::vector<int>> area(size, std::vector<int>(size, 0));
    for(int i = 0; i < readings.size(); i += 2){
        if(readings[i].first == readings[i+1].first){
            putStraightLine(readings[i], readings[i+1].second, 0, area);
        }else if(readings[i].second == readings[i+1].second){
            putStraightLine(readings[i], readings[i+1].first, 1, area);
        }else if(includeDiagonal && isDiagonalLine(readings[i], readings[i+1])){
            putDiagonalLine(readings[i], readings[i+1], area);
        }
    }
    return countOverlaps(area);
}
void D5::putStraightLine(std::pair<int,int> start, int end, int direction, std::vector<std::vector<int>> &area){
    if(direction == 0){
        int smaller = start.second > end ? end : start.second;
        int difference = abs(start.second-end);
        for(int i = 0; i <= difference; i++){
            area[smaller+i][start.first]++;
        }
    }
    else if (direction == 1){
        int smaller = start.first > end ? end : start.first;
        int difference = abs(start.first-end);
        for(int i = 0; i <= difference; i ++){
            area[start.second][smaller+i]++;
        }
    }
}
int D5::countOverlaps(std::vector<std::vector<int>> &area) {
    int result = 0;
    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size; j++){
            if(area[i][j] >= 2){
                result++;
            }
        }
    }
    return result;
}
int D5::solveSecond(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::pair<int, int>> readings = parseData(rawData);
    int overlaps = findOverlaps(readings, true);
    return overlaps;
}
bool D5::isDiagonalLine(std::pair<int, int> fstPnt, std::pair<int, int> sndPnt) {
    return abs(fstPnt.first-sndPnt.first) == abs(fstPnt.second-sndPnt.second);
}
void D5::putDiagonalLine(std::pair<int, int> start, std::pair<int, int> end, std::vector<std::vector<int> > &area) {
    int smallerX = start.first > end.first ? end.first : start.first;
    int smallerY = start.second > end.second ? end.second : start.second;
    int distance = abs(start.second - end.second);
    if(start.second - end.second == start.first - end.first ){
        for (int i = 0; i <= distance; i++){
            area[smallerY + i][smallerX + i]++;
        }
    }else{
        for (int i = 0; i <= distance; i++){
            area[smallerY + distance - i][smallerX + i]++;
        }
    }
}
