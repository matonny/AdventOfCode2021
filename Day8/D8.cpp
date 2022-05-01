//
// Created by Mateusz Wygonny on 16/12/2021.
//

#include "D8.h"
#include "../Utils/Reader.h"

int D8::solveFirst(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::vector<std::string>> parsedData = parseData(rawData);
    int uniqueOccurances = countUnique(parsedData);
    return uniqueOccurances;
}
std::vector<std::vector<std::string>> D8::parseData(std::vector<std::string> rawData) {
    std::vector<std::vector<std::string>> result = {};
    for(std::string reading : rawData){
        std::vector<std::string> signalPattern = split(std::string(reading.begin(), reading.begin()+58));
        std::vector<std::string> output = split(std::string(reading.begin()+ 61, reading.end()));
        result.push_back(signalPattern);
        result.push_back(output);
    }
    return result;
}
std::vector<std::string> D8::split(std::string source) {
    std::vector<std::string> result = {};
    std::string currentString = "";
    for(char character : source){
        if(character != ' '){
            currentString += character;
        }else{
            result.push_back(currentString);
            currentString = "";
        }
    }
    result.push_back(currentString);
    return result;
}
int D8::countUnique(std::vector<std::vector<std::string> > data) {
    int count = 0;
    for(int i = 0; i < data.size(); i+= 2){
        for(std::string digit : data[i+1]){
            if(digit.length() == 2 ||
            digit.length() == 7 ||
            digit.length() == 4 ||
            digit.length() == 3){
                count ++;
            }
        }
    }
    return count;
}
int D8::solveSecond(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<std::vector<std::string>> parsedData = parseData(rawData);
    int sumOfOutputs = getSumOfOutputs(parsedData);
    return sumOfOutputs;

}
int D8::getSumOfOutputs(std::vector<std::vector<std::string> > data) {
    int sum = 0;
    for(int i = 0; i < data.size(); i += 2){
        std::map<std::string, std::string> code = getCode(data[i]);
        std::string currentNumber = "";
        for(std::string singleDigit : data[i + 1]){
            std::sort(singleDigit.begin(), singleDigit.end());
            currentNumber += code.at(singleDigit);
        }
        sum += std::stoi(currentNumber);
    }
    return sum;
}
std::map<std::string, std::string> D8::getCode(std::vector<std::string> reading) {
    //positions in code are mapped the following way:
    // 00
    //1  2
    //1  2
    // 33
    //4  5
    //4  5
    // 66
    std::vector<char> code(7, ' ');
    std::string seven = getInputsOfLength(reading, 3)[0];
    std::string one = getInputsOfLength(reading, 2)[0];
    std::string four = getInputsOfLength(reading, 4)[0];
    std::string eight = getInputsOfLength(reading, 7)[0];
    std::vector<std::string> twoThreeFive = getInputsOfLength(reading, 5);
    std::vector<std::string> sixNineZero = getInputsOfLength(reading, 6);
    code[0] = getExtra(one, seven)[0];
    code[6] = getExtra(combine(four,seven), findMostSimilar(sixNineZero, combine(four,seven)))[0];
    std::string nine = combine(combine(four,seven), std::string(1, code[6]));
    code[3] = getExtra(combine(seven, std::string(1,code[6])), findMostSimilar(twoThreeFive, combine(seven, std::string(1,code[6]))))[0];
    std::string three = combine(combine(seven, std::string(1, code[3])), std::string(1, code[6]));
    code[1] = getExtra(three, nine)[0];
    code[4] = getExtra(nine, eight)[0];
    code[2] = getExtra(findMostSimilar(twoThreeFive, combine(three, std::string(1,code[4]))), three)[0];
    code[5] = getExtra(std::string(1, code[2]),one)[0];
    std::vector<char> zeroChars({code[0], code[1], code[2], code[4], code[5], code[6]});
    std::string zero(zeroChars.begin(), zeroChars.end());
    std::vector<char> twoChars({code[0], code[2], code[3], code[4],code[6]});
    std::string two(twoChars.begin(), twoChars.end());
    std::vector<char> fiveChars({code[0], code[1], code[3], code[5], code[6]});
    std::string five(fiveChars.begin(), fiveChars.end());
    std::vector<char> sixChars({code[0], code[1], code[3], code[4], code[5], code[6]});
    std::string six(sixChars.begin(), sixChars.end());
    std::vector<std::string> result = {zero, one, two, three, four, five, six, seven, eight, nine};
    std::vector<std::string> values = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    std::map<std::string, std::string> codeMap;
    for(int i = 0; i < result.size(); i++){
        std::sort(result[i].begin(), result[i].end());
    }
    for(int i = 0; i < result.size(); i++){
        codeMap.insert(std::make_pair(result[i], values[i]));
    }
    std::string lol = codeMap.at(result[0]);
    return codeMap;
}
std::vector<std::string> D8::getInputsOfLength(std::vector<std::string> input, int length) {
    std::vector<std::string> result = {};
    for(std::string element : input){
        if(element.length() == length){
            result.push_back(element);
        }
    }
    return result;
}
std::vector<char> D8::getExtra(std::string shorterDigit, std::string longerDigit) {
    std::vector<char> result = {};
    for(char wire : longerDigit){
        if(shorterDigit.find(wire)==std::string::npos){
            result.push_back(wire);
        }
    }
    return result;
}
std::string D8::combine(std::string firstDigit, std::string secondDigit) {
    std::string result = firstDigit;
    for(char wire : secondDigit){
        if(firstDigit.find(wire) == std::string::npos){
            result+=wire;
        }
    }
    return result;
}
std::string D8::findMostSimilar(std::vector<std::string> potentialStrings, std::string sourceString) {
    for(std::string candidate : potentialStrings){
        if(getExtra(sourceString, candidate).size()==1){
            return candidate;
        }
    }
    return "";
}