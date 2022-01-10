//
// Created by Mateusz Wygonny on 21/12/2021.
//

#include <queue>
#include <map>
#include <iostream>
#include "D15.h"

int D15::solveFirst(std::string fileName){
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<Node> graph = graphify(rawData);
    int findSafestPath = dijkstra(graph);
    return findSafestPath;
}

std::vector<Node> D15::graphify(std::vector<std::string> rawData){
    int size = rawData.size();
    std::vector<Node> result = {};
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            result.push_back(Node(rawData[i].at(j)-48, size*i+j));
        }
    }
    for(int i = 0; i < result.size(); i++){
        if(i%size -1 >= 0){
            result[i].neighbours.push_back(&result[i-1]);
        }
        if(i-size >= 0){
            result[i].neighbours.push_back(&result[i-size]);
        }
        if(i%size +1 < size){
            result[i].neighbours.push_back(&result[i+1]);
        }
        if(i+size < result.size()){
            result[i].neighbours.push_back(&result[i+size]);
        }
    }
    return result;
}

int D15::dijkstra(std::vector<Node> graph){
    std::vector<int> distances(graph.size(), 10000);
    std::vector<int> previous(graph.size(), -1);
    std::vector<bool> explored(graph.size(), false);
    std::vector<Node*> toExplore = {};
    for(int i = 0; i < graph.size(); i++){
        toExplore.push_back(&graph[i]);
    }
    distances[graph[0].id] = 0;
    while(!toExplore.empty()){
        Node* nearestNode = findMin(toExplore, distances);
        explored[nearestNode->id] = true;
        toExplore.erase(std::find(toExplore.begin(), toExplore.end(), nearestNode));
        for(int i = 0; i < nearestNode->neighbours.size(); i++){
            if(!explored[nearestNode->neighbours[i]->id]){
                int potentialDist = distances[nearestNode->id] + nearestNode->neighbours[i]->weight;
                if(potentialDist < distances[nearestNode->neighbours[i]->id]){
                    distances[nearestNode->neighbours[i]->id] = potentialDist;
                    previous[nearestNode->neighbours[i]->id] = nearestNode->id;
                }
            }
        }
    }
    return distances[graph.size()-1];
}
Node* D15::findMin(std::vector<Node*> unexploredNodes, std::vector<int> distances){
    Node* minNode = unexploredNodes[0];
    for(int i = 1; i < unexploredNodes.size(); i++){
        if(distances[unexploredNodes[i]->id] < distances[minNode->id]){
            minNode = unexploredNodes[i];
        }
    }
    return minNode;
}
void D15::printPath(std::vector<int> previous){
    std::vector<std::vector<char>> path(10, std::vector<char>(10, '_'));
    int curr = 99;
    while(curr != 0){
        path[curr/10][curr%10] = '*';
        curr = previous[curr];
    }
    std::cout << std::endl;
    for(int i = 0; i < path.size(); i++){
        for(int j = 0; j < path[i].size(); j++){
            std::cout << path[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}