//
// Created by Mateusz Wygonny on 20/12/2021.
//

#include <iostream>
#include "D13.h"

int D13::solveFirst(std::string paperFile, std::string foldFile){
    std::vector<std::string> rawPaper = Reader::getFile(paperFile);
    std::vector<std::string> rawFolds = Reader::getFile(foldFile);
    std::vector<std::pair<int, int>> paper = getPaper(rawPaper);
    std::vector<std::pair<char, int>> folds = getFolds(rawFolds);
    makeFolds(paper, std::vector<std::pair<char, int>>{folds[0]});
    return getUnique(paper).size();
}

int D13::solveSecond(std::string paperFile, std::string foldFile){
    std::vector<std::string> rawPaper = Reader::getFile(paperFile);
    std::vector<std::string> rawFolds = Reader::getFile(foldFile);
    std::vector<std::pair<int, int>> paper = getPaper(rawPaper);
    std::vector<std::pair<char, int>> folds = getFolds(rawFolds);
    makeFolds(paper, folds);
    printResult(uniquePointsToVector(getUnique(paper)));

}
std::vector<std::pair<int, int>> D13::getPaper(std::vector<std::string> rawPaper){
    std::vector<std::pair<int, int>> result = {};
    for(std::string coordinates : rawPaper){
        std::string currentNumber = "";
        std::string firstNumber = "";
        for(char digit : coordinates){
            if(digit!= ','){
                currentNumber += digit;
            }else{
                firstNumber = currentNumber;
                currentNumber = "";
            }
        }
        result.push_back(std::make_pair(std::stoi(firstNumber), std::stoi(currentNumber)));
    }
    return result;
}

std::vector<std::pair<char, int>> D13::getFolds(std::vector<std::string> rawFolds){
    std::vector<std::pair<char, int>> result = {};
    for(std::string fold : rawFolds){
        result.push_back(std::make_pair(fold.at(11), std::stoi(std::string(fold.begin()+13, fold.end()))));
    }
    return result;
}

int D13::makeFolds(std::vector<std::pair<int, int>> &paper, std::vector<std::pair<char, int>> folds){
    for(std::pair<char, int> fold : folds){
        if(fold.first == 'x'){
            for(int i = 0; i < paper.size(); i++){
                int distance = fold.second - paper[i].first;
                if(distance < 0){
                    paper[i].first = fold.second + distance;
                }
            }
        }else{
            for(int i = 0; i < paper.size(); i++){
                int distance = fold.second - paper[i].second;
                if(distance < 0){
                    paper[i].second = fold.second + distance;
                }
            }
        }
    }

}

std::vector<std::pair<int, int>> D13::getUnique(std::vector<std::pair<int, int>> paper){
    std::vector<std::pair<int, int>> unique = {};
    for(std::pair<int, int> dot : paper){
        if(std::find(unique.begin(), unique.end(), dot) == unique.end()){
            unique.push_back(dot);
        }
    }
    return unique;
}

std::vector<std::vector<char>> D13::uniquePointsToVector(std::vector<std::pair<int, int>> points){
    int maxX = 0;
    int maxY = 0;
    for(std::pair<int, int> point : points){
        if(point.first > maxX){
            maxX = point.first;
        }
        if(point.second > maxY){
            maxY = point.second;
        }
    }
    std::vector<std::vector<char>> result(maxY+1, std::vector<char>(maxX+1,'.'));
    for(std::pair<int, int> point : points){
        result[point.second][point.first] = '#';
    }
    return result;
}

void D13::printResult(std::vector<std::vector<char>> result){
    for(std::vector<char> row : result){
        for(char sign : row){
            std::cout<< sign;
        }
        std::cout << std::endl;
    }
}