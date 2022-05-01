//
// Created by Mateusz Wygonny on 19/12/2021.
//
using namespace  std;

#include <iostream>
#include "D12.h"
int D12::solveFirst(string fileName) {
    vector<string> rawData = Reader::getFile(fileName);
    vector<pair<string, string>> parsedData = parseData(rawData);
    vector<pair<string, vector<string>>> graph = graphify(parsedData);
    vector<vector<string>> allPaths = findAllPaths("start", "end", graph, false);
    return allPaths.size();
}
int D12::solveSecond(string fileName){
    vector<string> rawData = Reader::getFile(fileName);
    vector<pair<string, string>> parsedData = parseData(rawData);
    vector<pair<string, vector<string>>> graph = graphify(parsedData);
    vector<vector<string>> allPaths = findAllPaths("start", "end", graph, true);
    return allPaths.size();
}
vector<pair<string, string> > D12::parseData(vector<string> rawData) {
    vector<pair<string, string>> result = {};
    for(string rawEdge : rawData){
        string firstPart = "";
        string currentWord = "";
        for(char letter : rawEdge){
            if(letter != '-'){
                currentWord += letter;
            }else{
                firstPart = currentWord;
                currentWord = "";
            }
        }
        result.push_back(make_pair(firstPart,currentWord));
    }
    return result;
}
vector<pair<string, vector<string> > > D12::graphify(vector <pair<string, string>> &rawGraph) {
    vector<pair<string, vector<string>>> result = {};
    for(pair<string, string> edge : rawGraph){
        if(!isNodeAdded(edge.first, result)){
            result.push_back(make_pair(edge.first, vector<string>{edge.second}));
        }else{
            addConnection(edge.first, edge.second, result);
        }
        if(!isNodeAdded(edge.second, result)){
            result.push_back(make_pair(edge.second, vector<string>{edge.first}));
        }else{
            addConnection(edge.second, edge.first, result);
        }
    }
    return result;
}
bool D12::isNodeAdded(string node, vector<pair<string, vector<string>>> currentGraph) {
    for(pair<string, vector<string> > edge : currentGraph){
        if(edge.first == node){
            return true;
        }
    }
    return false;
}
void D12::addConnection(string startNode, string endNode, vector<pair<string, vector<string>>> &currentGraph) {
    for(int i = 0; i < currentGraph.size(); i++){
        if(currentGraph[i].first == startNode){
            currentGraph[i].second.push_back(endNode);
        }
    }
}

vector<vector<string>> D12::findAllPaths(string initial, string goal, vector<pair<string, vector<string>>> &currentGraph, bool isDouble){
    vector<vector<string>> allPathsToTarget = {};
    queue<vector<string>> pathsToExplore = {};
    pathsToExplore.push(vector<string>{initial});
    while(!pathsToExplore.empty()){
        vector<string> currentPath = pathsToExplore.front();
        pathsToExplore.pop();
        string lastStep = currentPath[currentPath.size()-1];
        if(lastStep == goal){
            allPathsToTarget.push_back(currentPath);
        }else
        {
            vector <string> adjacentNodes = currentGraph[findID(lastStep, currentGraph)].second;
            for (int i = 0; i < adjacentNodes.size(); i++)
            {
                if (isLegalMove(adjacentNodes[i], currentPath, isDouble))
                {
                    vector <string> newPath(currentPath);
                    newPath.push_back(adjacentNodes[i]);
                    pathsToExplore.push(newPath);
                }
            }
        }
    }
    return allPathsToTarget;
}

bool D12::isLegalMove(std::string node, std::vector<std::string> path, bool canDouble){
    if(isupper(node.at(0))){
        return true;
    }else{
        if(find(path.begin(), path.end(), node) == path.end()){
            return true;
        }else{
            if(canDouble && node != "start"){
                if (!repeatedSmallCaves(path)){
                    return true;
                } else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
}

bool D12::repeatedSmallCaves(std::vector<std::string> path){
    for(int i = 0; i < path.size(); i++){
        if(islower(path[i].at(0))){
                if(count(path.begin(), path.end(), path[i]) > 1){
                    return true;
                }
        }
    }
    return false;
}
int D12::findID(std::string targetNode, std::vector<std::pair<std::string, std::vector<std::string>>> &graph){
    for(int i = 0; i < graph.size(); i++){
        if(graph[i].first == targetNode){
            return i;
        }
    }
    return -1;
}