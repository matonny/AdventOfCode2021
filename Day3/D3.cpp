//
// Created by Mateusz Wygonny on 10/12/2021.
//

#include <cmath>
#include "../Utils/Reader.h"
#include "D3.h"
int D3::solveFirst(std::string fileName) {
    std::vector<std::string> data = Reader::getFile(fileName);
    std::vector<int> count(data[0].length());
    for(std::string reading : data){
        for(int i = 0; i < reading.size(); i++){
            if(reading.at(i) == '1'){
                count[i] ++;
            }
        }
    }
    int half = data.size()/2;
    std::vector<char> gamma = {};
    std::vector<char> epsilon = {};
    for(int singleValue : count){
        if(singleValue > half){
            gamma.push_back('1');
            epsilon.push_back('0');
        }else{
            gamma.push_back('0');
            epsilon.push_back('1');
        }
    }
    return toDecimal(gamma)*toDecimal(epsilon);
}
int D3::solveSecond(std::string fileName) {
    std::vector<std::string> data = Reader::getFile(fileName);
    int oxygen = readData(data, 1);
    int coTwo = readData(data, 0);
    return oxygen*coTwo;
}
int D3::readData(std::vector<std::string> rawReadings, int type) {
    for(int i = 0; i < rawReadings[0].length(); i++){
        int half = std::ceil(rawReadings.size()*.5);
        int count = 0;
        for(int j = 0; j < rawReadings.size(); j++){
            if(rawReadings[j].at(i) == '1'){
                count ++;
            }
        }
        char target = '0';
        if(type == 1){ // get the most frequent bit;
            if(count >= half){
                target = '1';
            }else{
                target = '0';
            }
        }else{
            if(count < half){
                target = '1';
            }else{
                target = '0';
            }
        }
        for(int j = 0; j < rawReadings.size(); j++){
            if(rawReadings[j].at(i) != target){
                rawReadings.erase(rawReadings.begin()+j);
                j--;
            }
        }
        if(rawReadings.size() == 1){
            return toDecimal(std::vector<char> (rawReadings[0].begin(), rawReadings[0].end()));
        }
    }
}
int D3::toDecimal(std::vector<char> binaryNumber) {
    int result = 0;
    for(int i = 0; i < binaryNumber.size(); i++){
        if(binaryNumber[i] == '1'){
            result += pow(2, binaryNumber.size()-1-i);
        }
    }
    return result;
}