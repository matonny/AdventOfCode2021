//
// Created by Mateusz Wygonny on 09/12/2021.
//

#include <vector>
#include "D1.h"
int D1::solveFirst(std::string fileName) {
    std::vector<int> numbers = Reader::getNumbers(fileName);
    int increases = 0;
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > numbers[i-1]){
            increases++;
        }
    }
    return increases;
}
int D1::solveSecond(std::string fileName) {
    std::vector<int> numbers = Reader::getNumbers(fileName);
    int increases = 0;
    for(int i = 3; i < numbers.size(); i++){
        int firstWindow = numbers[i-3] + numbers[i-2] + numbers[i-1];
        int secondWindow = numbers[i-2] + numbers[i-1] + numbers[i];
        if(secondWindow > firstWindow){
            increases++;
        }
    }
    return increases;
}
