//
// Created by Mateusz Wygonny on 10/12/2021.
//

#ifndef ADVENTOFCODE2021_D3_H
#define ADVENTOFCODE2021_D3_H


#include <string>

class D3
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static int toDecimal(std::vector<char> binaryNumber);
    static int readData(std::vector<std::string> data , int type);
};


#endif //ADVENTOFCODE2021_D3_H
