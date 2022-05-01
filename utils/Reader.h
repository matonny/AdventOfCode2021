//
// Created by Mateusz Wygonny on 09/12/2021.
//

#ifndef ADVENTOFCODE2021_READER_H
#define ADVENTOFCODE2021_READER_H


#include <vector>

class Reader
{
public:
    static std::vector<int> getNumbers(std::string fileName);
    static std::vector<std::string> getFile(std::string fileName);
};


#endif //ADVENTOFCODE2021_READER_H
