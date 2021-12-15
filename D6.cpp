//
// Created by Mateusz Wygonny on 15/12/2021.
//
#include "Reader.h"
#include "D6.h"
long long D6::solveFirst(std::string fileName) {
    std::string rawData = Reader::getFile(fileName)[0];
    std::vector<long long> initialAges = parseData(rawData);
    long long numberOfFish = simulateFish(initialAges, 256);
    return numberOfFish;
}
std::vector<long long> D6::parseData(std::string data) {
    std::vector<long long> result = {};
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
long long D6::simulateFish(std::vector<long long> ages, int days) {
    std::vector<long long> currentFishes = countFish(ages);
    for(int i = 0; i < days; i++){
        std::vector<long long> tempFishCount(9, 0);
        for(int i = 1; i <=8; i++){
            tempFishCount[i-1] += currentFishes[i];
        }
        tempFishCount[6] += currentFishes[0];
        tempFishCount[8] += currentFishes[0];
        currentFishes = tempFishCount;
    }
    return getSum(currentFishes);
}
long long D6::getSum(std::vector<long long> numbers) {
    long long sum = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    return sum;
}
std::vector<long long> D6::countFish(std::vector<long long> ages) {
    std::vector<long long> fishCount(8, 0);
    for(int i = 1; i <= 6; i++){
        int currFish = 0;
        for(int age : ages){
            if(age == i){
                currFish++;
            }
        }
        fishCount[i] = currFish;
    }
    return fishCount;
}