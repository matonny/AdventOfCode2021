//
// Created by Mateusz Wygonny on 09/12/2021.
//

#include <fstream>
#include <iostream>
#include "../Utils/Reader.h"

std::vector<int> Reader::getNumbers(std::string fileName){
    std::vector<int> result = {};
    std::vector<std::string> originalText = getFile(fileName);
    for(std::string entry : originalText){
        result.push_back(std::stoi(entry));
    }
    return result;
}
std::vector<std::string> Reader::getFile(std::string fileName){
    std::vector<std::string> result = {};
    std::string line;
    std::ifstream myFile;
    std::string path = "Data/" + fileName + ".txt";
    myFile.open(path);
    if(myFile.is_open()){
        while (getline(myFile, line)){
            result.push_back(line);
        }
    }
    return result;
}