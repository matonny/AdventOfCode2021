//
// Created by Mateusz Wygonny on 16/12/2021.
//

#ifndef ADVENTOFCODE2021_D8_H
#define ADVENTOFCODE2021_D8_H

#include <map>
#include <string>

class D8
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<std::vector<std::string>> parseData (std::vector<std::string> rawData);
    static std::vector<std::string> split (std::string);
    static int countUnique(std::vector<std::vector<std::string>> data);
    static int getSumOfOutputs(std::vector<std::vector<std::string>> data);
    static std::map<std::string, std::string> getCode(std::vector<std::string> reading);
    static std::vector<std::string> getInputsOfLength(std::vector<std::string> input, int length);
    static std::vector<char> getExtra(std::string shorterDigit, std::string longerDigit);
    static std::string combine(std::string firstDigit, std::string secondDigit);
    static std::string findMostSimilar(std::vector<std::string> potentialStrings, std::string sourceString);
    static std::vector<std::string> getLetterTemplates(std::vector<char> code);

};


#endif //ADVENTOFCODE2021_D8_H
