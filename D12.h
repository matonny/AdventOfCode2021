//
// Created by Mateusz Wygonny on 19/12/2021.
//

#ifndef ADVENTOFCODE2021_D12_H
#define ADVENTOFCODE2021_D12_H


#include <string>
#include <queue>
#include "Reader.h"


class D12
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<std::pair<std::string, std::vector<std::string>>> graphify(std::vector <std::pair<std::string, std::string>> &data);
    static std::vector<std::pair<std::string, std::string>> parseData (std::vector<std::string> rawData);
    static bool isNodeAdded(std::string node, std::vector<std::pair<std::string, std::vector<std::string>>> currentGraph);
    static void addConnection(std::string fstNode, std::string sndNode, std::vector<std::pair<std::string, std::vector<std::string>>> &currentGraph);
    static std::vector<std::vector<std::string>> findAllPaths(std::string initial, std::string goal, std::vector<std::pair<std::string, std::vector<std::string>>> &currentGraph, bool canDouble);
    static int findID(std::string targetNode, std::vector<std::pair<std::string, std::vector<std::string>>> &graph );
    static bool isLegalMove(std::string node, std::vector<std::string> path, bool canDouble);
    static bool repeatedSmallCaves(std::vector<std::string> path);
};


#endif //ADVENTOFCODE2021_D12_H
