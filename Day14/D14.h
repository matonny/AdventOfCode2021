//
// Created by Mateusz Wygonny on 20/12/2021.
//

#ifndef ADVENTOFCODE2021_D14_H
#define ADVENTOFCODE2021_D14_H

#include "../Utils/Reader.h"
#include <map>

class D14
{
public:
    static int solveFirst(std::string fileName);
    static long long solveSecond(std::string fileName);
    static std::map<std::string, char> getRules(std::vector<std::string> rawRules);
    static long long simulate(std::string original, std::map<std::string, char> rules, int steps);
    static long long getDifference(std::string polymer);
    static std::vector<char> getUnique(std::string polymer);
    static std::map<std::string, std::pair<std::string, std::string>> getRulesImplications(std::map<std::string, char> rules);
    static void addPair(std::vector<std::string> &uniquePairs, std::vector<long long> &pairsCount, std::string pair, int long long);
    static long long findMin(std::vector<long long> values);

};


#endif //ADVENTOFCODE2021_D14_H
