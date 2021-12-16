//
// Created by Mateusz Wygonny on 16/12/2021.
//

#include <vector>
#include "D7.h"
#include <numeric>
#include <cmath>
#include "Reader.h"

long D7::solveFirst(std::string fileName) {
    std::string rawData = Reader::getFile(fileName)[0];
    std::vector<int> initialCrabs = parseData(rawData);
    long minMoves = findMinimumMoves(initialCrabs);
    return minMoves;
}
long D7::solveSecond(std::string fileName) {
    std::string rawData = Reader::getFile(fileName)[0];
    std::vector<int> initialCrabs = parseData(rawData);
    long minMoves = findMinimumExpMoves(initialCrabs);
    return minMoves;
}

std::vector<int> D7::parseData(std::string data) {
    std::vector<int> result = {};
    std::string currentNumber = "";
    for(char character : data){
        if(character != ','){
            currentNumber += character;
        }else{
            result.push_back(std::stoi(currentNumber));
            currentNumber = "";
        }
    }
    result.push_back(std::stoll(currentNumber));
    return result;
}
void D7::quickSort(std::vector<int> &unsortedArray, int left, int right) {
    if(left < right){
        int pivot = partition(unsortedArray, left, right);
        quickSort(unsortedArray, left, pivot-1);
        quickSort(unsortedArray, pivot+1, right);
    }
}
int D7::partition(std::vector<int> &unsortedArray, int left, int right) {
    int splitValue = unsortedArray[right];
    int currentIndex = left;
    for(int i = left;  i < right; i++){
        if(unsortedArray[i] < splitValue){
            int temp = unsortedArray[i];
            unsortedArray[i] = unsortedArray[currentIndex];
            unsortedArray[currentIndex] = temp;
            currentIndex++;
        }
    }
    int temp = unsortedArray[right];
    unsortedArray[right] = unsortedArray[currentIndex];
    unsortedArray[currentIndex] = temp;
    return currentIndex;

}
long D7::findMinimumMoves(std::vector<int> &initialCrabs) {
    quickSort(initialCrabs, 0, initialCrabs.size());
    int median = ((initialCrabs[initialCrabs.size()/2-1]+initialCrabs[initialCrabs.size()/2])/2);
    long usedFuel = 0;
    for(int crabPosition : initialCrabs){
        usedFuel += abs(crabPosition-median);
    }
    return usedFuel;
}
long D7::findMinimumExpMoves(std::vector<int> &initialCrabs){
    quickSort(initialCrabs, 0, initialCrabs.size()-1);
    long mean = floor((std::accumulate(initialCrabs.begin(), initialCrabs.end(), 0)/initialCrabs.size()));
    long result = 0;
    for(int reading : initialCrabs){
        int distance = abs(reading-mean);
        result += increasingFuel(distance);
    }
    return result;
}
int D7::increasingFuel(int distance){
    int fuel = 0;
    for(int i = 1; i <=distance; i++){
        fuel +=i;
    }
    return fuel;
}