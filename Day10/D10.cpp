//
// Created by Mateusz Wygonny on 17/12/2021.
//

#include <map>
#include "D10.h"

int D10::solveFirst(std::string fileName) {
    std::vector<std::string> data = Reader::getFile(fileName);
    int corruptedScore = getCorruptedSum(data);
    return corruptedScore;
}
int D10::getCorruptedSum(std::vector<std::string> data) {
    int sum = 0;
    for(std::string line : data){
        sum += getLineScore(line).first;
    }
    return sum;
}
std::pair<int, std::stack<char>> D10::getLineScore(std::string line) {
    std::map<char,char> syntax = {{'[',']',}, {'(',')'}, {'{','}'}, {'<', '>'}};
    std::map<char, int> value = {{')', 3}, {']',57}, {'}', 1197}, {'>', 25137}};
    std::stack<char> expected = {};
    for(char character : line)
    if(syntax.count(character)){
        expected.push(syntax.at(character));
    }else{
        if(character != expected.top()){
            return std::make_pair(value.at(character), std::stack<char>{});
        }else{
            expected.pop();
        }
    }
    return std::make_pair(0, expected);
}
long D10::solveSecond(std::string fileName){
    std::vector<std::string> data = Reader::getFile(fileName);
    long autocompleteScore = getAutocompleteSum(data);
    return autocompleteScore;
}
long D10::getAutocompleteSum(std::vector<std::string> data){
    std::vector<long> result = {};
    for(std::string line : data){
        std::pair<int, std::stack<char>> lineResult;
        lineResult = getLineScore(line);
        if(lineResult.first == 0){
            result.push_back(getAutocompleteScore(lineResult.second));
        }
    }
    std::sort(result.begin(), result.end());
    return result[result.size()/2];
}
long D10::getAutocompleteScore(std::stack<char> toComplete){
    long sum = 0;
    std::map<char, int> value = {{')', 1}, {']',2}, {'}', 3}, {'>', 4}};
    while(!toComplete.empty()){
        sum = sum * 5;
        sum += value.at(toComplete.top());
        toComplete.pop();
    }
    return sum;
}