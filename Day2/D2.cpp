//
// Created by Mateusz Wygonny on 10/12/2021.
//

#include "D2.h"
#include "../Utils/Reader.h"
int D2::solveFirst(std::string fileName) {
    int depth = 0;
    int horizontalPos = 0;
    std::vector<std::string> allComands = Reader::getFile(fileName);
    for(std::string rawCommand : allComands){
        std::pair<std::string, std::string> preparedCommand = readCommand(rawCommand);
        if(preparedCommand.first == "forward"){
            horizontalPos += std::stoi(preparedCommand.second);
        }else if(preparedCommand.first == "down"){
            depth += std::stoi(preparedCommand.second);
        }else{
            depth -= std::stoi(preparedCommand.second);
        }
    }
    return depth*horizontalPos;
}
int D2::solveSecond(std::string fileName) {
    int depth = 0;
    int aim = 0;
    int horizontalPos = 0;
    std::vector<std::string> allComands = Reader::getFile(fileName);
    for(std::string rawCommand : allComands){
        std::pair<std::string, std::string> preparedCommand = readCommand(rawCommand);
        if(preparedCommand.first == "forward"){
            horizontalPos += std::stoi(preparedCommand.second);
            depth += aim*std::stoi(preparedCommand.second);
        }else if(preparedCommand.first == "down"){
            aim += std::stoi(preparedCommand.second);
        }else{
            aim -= std::stoi(preparedCommand.second);
        }
    }
    return depth*horizontalPos;
}
std::pair<std::string, std::string> D2::readCommand(std::string basicString)
{
    int spaceIndex = 0;
    for(int i = 0; i <basicString.size(); i++){
        if(basicString.at(i)==' '){
            spaceIndex = i;
            break;
        }
    }
    std::string command = basicString.substr(0, spaceIndex);
    std::string value = basicString.substr(spaceIndex+1);
    return std::pair<std::string, std::string>{command,value};
}
