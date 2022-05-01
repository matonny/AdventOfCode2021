//
// Created by Mateusz Wygonny on 18/12/2021.
//

#include "D11.h"


int D11::solveFirst(std::string fileName)
{
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::vector<int>> parsedData = parseData(rawData);
    int flashes = countFlashes(parsedData, 100);
    return flashes;
}
std::vector<std::vector<int>> D11::parseData(std::vector<std::string> rawData){
    std::vector<std::vector<int>> result = {};
    for(std::string row : rawData){
        std::vector<int> numRow = {};
        for(char digit : row){
            numRow.push_back(digit - '0');
        }
        result.push_back(numRow);
    }
    return result;
}
void D11::increaseAllLevels(std::vector<std::vector<int> > &data) {
    for(int i = 0; i < data.size(); i++){
        for(int j = 0; j < data.size(); j++){
            data[i][j] ++;
        }
    }
}

int D11::countFlashes(std::vector<std::vector<int> > &octopuses, int steps) {
    int allFlashes = 0;
    for(int i = 0; i < steps; i++){
        increaseAllLevels(octopuses);
        std::vector<std::vector<bool>> flashedThisStep(octopuses.size(), std::vector<bool>(octopuses.size(), false));
        bool someoneFlashed;
        do{
            someoneFlashed = false;
            std::vector<std::pair<int,int>> toFlash = {};
            for(int j = 0; j < octopuses.size(); j++){
                for(int k = 0; k < octopuses.size(); k++){
                    if(octopuses[j][k] > 9 && !flashedThisStep[j][k]){
                        allFlashes++;
                        someoneFlashed = true;
                        flashedThisStep[j][k] = true;
                        toFlash.push_back(std::make_pair(j,k));
                    }
                }
            }
            flashAll(octopuses, toFlash);
        }while(someoneFlashed);
        resetOctopuses(octopuses, flashedThisStep);
    }
    return allFlashes;
}
void D11::resetOctopuses(std::vector<std::vector<int> > &octopuses, std::vector<std::vector<bool> > flashed) {
    for(int i = 0; i < octopuses.size(); i++){
        for(int j = 0; j < octopuses.size(); j++){
            if(flashed[i][j]){
                octopuses[i][j] = 0;
            }
        }
    }
}
void D11::flashAll(std::vector<std::vector<int> > &octopuses, std::vector<std::pair<int, int> > toFlash) {
    for(std::pair<int, int> octopus : toFlash){
        flash(octopuses, octopus.first, octopus.second);
    }
}
void D11::flash(std::vector<std::vector<int> > &octopuses, int y, int x) {
    for(int i = y-1; i <= y+1; i++){
        if(i >= 0 && i < octopuses.size()){
            for(int j = x-1; j <= x+1; j++){
                if(j >= 0 && j < octopuses.size()){
                    octopuses[i][j]++;
                }
            }
        }
    }
}
int D11::solveSecond(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::vector<int>> parsedData = parseData(rawData);
    int firstStepWhenAllFlash = whenAllFlash(parsedData, 600);
    return firstStepWhenAllFlash;
}
int D11::whenAllFlash(std::vector<std::vector<int> > &octopuses, int steps) {
    for(int i = 0; i < steps; i++){
        increaseAllLevels(octopuses);
        std::vector<std::vector<bool>> flashedThisStep(octopuses.size(), std::vector<bool>(octopuses.size(), false));
        bool someoneFlashed;
        do{
            someoneFlashed = false;
            std::vector<std::pair<int,int>> toFlash = {};
            for(int j = 0; j < octopuses.size(); j++){
                for(int k = 0; k < octopuses.size(); k++){
                    if(octopuses[j][k] > 9 && !flashedThisStep[j][k]){
                        someoneFlashed = true;
                        flashedThisStep[j][k] = true;
                        toFlash.push_back(std::make_pair(j,k));
                    }
                }
            }
            flashAll(octopuses, toFlash);
        }while(someoneFlashed);
        resetOctopuses(octopuses, flashedThisStep);
        if(didAllFlash(octopuses)){
            return i;
        }
    }
    return -1;
}
bool D11::didAllFlash(std::vector<std::vector<int> > &octopuses) {
    for(int i = 0; i < octopuses.size(); i++){
        for(int j = 0; j < octopuses.size(); j++){
            if(octopuses[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}