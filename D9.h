//
// Created by Mateusz Wygonny on 17/12/2021.
//

#ifndef ADVENTOFCODE2021_D9_H
#define ADVENTOFCODE2021_D9_H

#include "Reader.h"
#include <string>
class D9
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static int getSumLowPoints(std::vector<std::vector<int>> data);
    static bool isLowPoint (int y, int x, std::vector<std::vector<int>> &data);
    static std::vector<int> getMaxBasins(std::vector<std::vector<int>> &data);
    static int getBasinSize(int y, int x, std::vector<std::vector<int>> & data);
    static std::vector<std::vector<int>> parseData(std::vector<std::string> data);
};


#endif //ADVENTOFCODE2021_D9_H
