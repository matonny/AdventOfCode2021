//
// Created by Mateusz Wygonny on 21/12/2021.
//

#include <queue>
#include <map>
#include <math.h>
#include <iostream>
#include "D15.h"

int D15::solveFirst(std::string fileName){
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<Node> graph = graphify(rawData);
    int findSafestPath = aStar(graph, graph.size()-1);
    return findSafestPath;
}

int D15::solveSecond(std::string fileName){
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::string> scaledData = scale(rawData);
    std::vector<Node> graph = graphify(scaledData);
    int findSafestPath = aStar(graph, graph.size()-1);
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

int D15::aStar(std::vector<Node> graph, int target){
    int width = sqrt(graph.size());
    std::vector<int> gScore(graph.size(), 100000000);
    gScore[0] = 0;
    std::vector<float> fScore(graph.size(), 100000000);
    fScore[0] = h(0, target, width);
    std::vector<int> previous(graph.size(), 100000000);
    std::vector<bool> addedToExplore(graph.size(), false);
    std::vector<Node*> toExplore = {};
    toExplore.push_back(&graph[0]);
    addedToExplore[0] = true;
    while(!toExplore.empty()){
        Node* currentNode = findMin(toExplore, fScore);
        if(currentNode->id == target){
            return gScore[target];
        }
        toExplore.erase(std::find(toExplore.begin(), toExplore.end(), currentNode));
        for(Node* neighbour : currentNode->neighbours){
            int potentialG = gScore[currentNode->id] + neighbour->weight;
            if(potentialG < gScore[neighbour->id]){
                previous[neighbour->id] = currentNode -> id;
                gScore[neighbour->id] = potentialG;
                fScore[neighbour->id] = potentialG + h(neighbour->id, target, width);
                if(!addedToExplore[neighbour->id]){
                    toExplore.push_back(neighbour);
                    addedToExplore[neighbour->id] = true;
                }
            }
        }
    }

}
int D15::dijkstra(std::vector<Node> graph, int target){
    std::vector<int> distances(graph.size(), 100000000);
    std::vector<int> previous(graph.size(), -1);
    std::vector<bool> explored(graph.size(), false);
    std::vector<Node*> toExplore = {};
    for(int i = 0; i < graph.size(); i++){
        toExplore.push_back(&graph[i]);
    }
    distances[graph[0].id] = 0;
    while(!toExplore.empty()){
        Node* nearestNode = findMin(toExplore, distances);
        if(nearestNode->id == target){
            break;
        }
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
    return distances[target];
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
Node* D15::findMin(std::vector<Node*> unexploredNodes, std::vector<float> distances){
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
std::vector<std::string> D15::scale(std::vector<std::string> rawData){
    int scale = 5;
    std::vector<std::string> result = rawData;
    for(int i = 0; i < rawData.size(); i++){
        for(int j = 0; j < scale-1; j++){
            for(int k = 0; k < rawData.size(); k++){
                char newRisk = (((result[i].at(result.size()*j+k)-48)+1)%10)+48;
                if(newRisk == 48){
                    newRisk += 1;
                }
                result[i] += newRisk;
            }
        }
    }
    for(int i = 0; i < scale-1; i++){
        for(int j = 0; j < rawData.size(); j++){
            std::string newString = "";
            for(int k = 0; k < rawData.size()*scale; k++){
                char newRisk = (((result[rawData.size()*i + j].at(k)-48)+1)%10)+48;
                if(newRisk == 48){
                    newRisk += 1;
                }
                newString += newRisk;
            }
            result.push_back(newString);
        }
    }
    return result;
}

float D15::h(int source, int target, int size){
    int x1 = source % size;
    int y1 = source / size;
    int x2 = target % size;
    int y2 = target / size;
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}