//
// Created by Mateusz Wygonny on 18/12/2021.
//

#ifndef ADVENTOFCODE2021_D11_H
#define ADVENTOFCODE2021_D11_H

#include <string>
#include "Reader.h"

class D11
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<std::vector<int>> parseData(std::vector<std::string> rawData);
    static void increaseAllLevels(std::vector<std::vector<int>> &data);
    static int countFlashes(std::vector<std::vector<int>> &octopuses, int steps);
    static void flashAll(std::vector<std::vector<int>> &octopuses, std::vector<std::pair<int, int>> toFlash);
    static void flash(std::vector<std::vector<int>> &octopuses, int y, int x);
    static void resetOctopuses(std::vector<std::vector<int>> &octopuses, std::vector<std::vector<bool>> flashed);
    static int whenAllFlash(std::vector<std::vector<int>> &octopuses, int steps);
    static bool didAllFlash(std::vector<std::vector<int>> &octopuses);
};


#endif //ADVENTOFCODE2021_D11_H
