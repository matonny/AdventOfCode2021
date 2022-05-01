//
// Created by Mateusz Wygonny on 10/12/2021.
//

#ifndef ADVENTOFCODE2021_D2_H
#define ADVENTOFCODE2021_D2_H


#include <string>

class D2
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::pair<std::string, std::string> readCommand(std::string basicString);
};


#endif //ADVENTOFCODE2021_D2_H
