//
// Created by Mateusz Wygonny on 21/12/2021.
//

#ifndef ADVENTOFCODE2021_D15_H
#define ADVENTOFCODE2021_D15_H

#include "Reader.h"
#include <string>
#include "Node.h"
class D15
{
public:
    int solveFirst(std::string fileName);
    std::vector<Node> graphify(std::vector<std::string> rawData);
    int dijkstra(std::vector<Node> graph);
    Node* findMin(std::vector<Node*> unexploredNodes, std::vector<int> distances);
    void printPath(std::vector<int> previous);
};


#endif //ADVENTOFCODE2021_D15_H
