//
// Created by Mateusz Wygonny on 15/12/2021.
//

#ifndef ADVENTOFCODE2021_D6_H
#define ADVENTOFCODE2021_D6_H


#include <string>

class D6
{
public:
    static long long solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<long long> parseData(std::string data);
    static long long simulateFish(std::vector<long long> initialAges, int days);
    static std::vector<long long> countFish(std::vector<long long> ages);
    static long long getSum(std::vector<long long>);
};


#endif //ADVENTOFCODE2021_D6_H
