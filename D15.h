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
    int solveSecond(std::string fileName);
    std::vector<Node> graphify(std::vector<std::string> rawData);
    int dijkstra(std::vector<Node> graph, int target);
    Node* findMin(std::vector<Node*> unexploredNodes, std::vector<int> distances);
    Node* findMin(std::vector<Node*> unexploredNodes, std::vector<float> distances);
    void printPath(std::vector<int> previous);
    std::vector<std::string> scale(std::vector<std::string>);
    int aStar(std::vector<Node> graph, int target);
    float h(int source, int target, int size);
};


#endif //ADVENTOFCODE2021_D15_H
