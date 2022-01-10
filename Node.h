//
// Created by Mateusz Wygonny on 21/12/2021.
//

#ifndef ADVENTOFCODE2021_NODE_H
#define ADVENTOFCODE2021_NODE_H


#include <vector>

class Node
{
public:
    Node(int weight, int id){
        this->weight = weight;
        this->id = id;
    }
    std::vector<Node*> neighbours;
    int weight;
    int id;
};


#endif //ADVENTOFCODE2021_NODE_H
