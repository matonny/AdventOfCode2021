//
// Created by Mateusz Wygonny on 20/12/2021.
//

#ifndef ADVENTOFCODE2021_D13_H
#define ADVENTOFCODE2021_D13_H


#include <string>
#include "../Utils/Reader.h"

class D13
{
public:
    static int solveFirst(std::string paperFile, std::string foldFile);
    static int solveSecond(std::string paperFile, std::string foldFile);
    static std::vector<std::pair<int, int>> getPaper(std::vector<std::string> rawPaper);
    static std::vector<std::pair<char, int>> getFolds(std::vector<std::string> rawFolds);
    static int makeFolds(std::vector<std::pair<int, int>> &paper, std::vector<std::pair<char, int>> folds);
    static std::vector<std::pair<int, int>> getUnique(std::vector<std::pair<int, int>> paper);
    static std::vector<std::vector<char>> uniquePointsToVector(std::vector<std::pair<int, int>> points);
    static void printResult(std::vector<std::vector<char>> result);
};


#endif //ADVENTOFCODE2021_D13_H
