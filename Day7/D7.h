//
// Created by Mateusz Wygonny on 16/12/2021.
//

#ifndef ADVENTOFCODE2021_D7_H
#define ADVENTOFCODE2021_D7_H


#include <string>

class D7
{
public:
    static long solveFirst(std::string fileName);
    static long solveSecond(std::string fileName);
    static void quickSort (std::vector<int> &unsortedArray, int left, int right);
    static std::vector<int> parseData (std::string);
    static long findMinimumMoves(std::vector<int> &initiallPositions);
    static int partition(std::vector<int> &unsortedArray, int left, int right);
    static long findMinimumExpMoves(std::vector<int> &initialCrabs);
    static int increasingFuel(int distance);
};


#endif //ADVENTOFCODE2021_D7_H
