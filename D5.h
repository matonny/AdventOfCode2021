//
// Created by Mateusz Wygonny on 15/12/2021.
//

#ifndef ADVENTOFCODE2021_D5_H
#define ADVENTOFCODE2021_D5_H


#include <string>

constexpr int size = 1000;
class D5
{
public:

    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<std::pair<int, int>> parseData(std::vector<std::string> rawData);
    static int findOverlaps(std::vector<std::pair<int, int>> readings, bool includeDiagonal);
    static bool isStraightLine(std::pair<int, int> fstPnt, std::pair<int, int> sndPnt);
    static void putStraightLine(std::pair<int,int> start, int end, int direction, std::vector<std::vector<int>> &area);
    static void putDiagonalLine(std::pair<int, int> start, std::pair<int, int> end,  std::vector<std::vector<int>> &area);
    static int countOverlaps(std::vector<std::vector<int>> &area);
    static bool isDiagonalLine(std::pair<int, int> fstPnt, std::pair<int, int> sndPnt);
};


#endif //ADVENTOFCODE2021_D5_H
