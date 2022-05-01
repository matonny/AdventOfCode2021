//
// Created by Mateusz Wygonny on 17/12/2021.
//

#ifndef ADVENTOFCODE2021_D10_H
#define ADVENTOFCODE2021_D10_H


#include <string>
#include <stack>
#include "../Utils/Reader.h"

class D10
{
public:
    static int solveFirst(std::string fileName);
    static long solveSecond(std::string fileName);
    static int getCorruptedSum(std::vector<std::string> data);
    static std::pair<int, std::stack<char>> getLineScore(std::string line);
    static long getAutocompleteScore(std::stack<char> toComplete);
    static long getAutocompleteSum(std::vector<std::string> data);

};


#endif //ADVENTOFCODE2021_D10_H
