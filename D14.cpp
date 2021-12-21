//
// Created by Mateusz Wygonny on 20/12/2021.
//


#include <string>
#include <limits>
#include "D14.h"

int D14::solveFirst(std::string fileName){
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::string originalPolymer = rawData[0];
    std::map<std::string, char> rules = getRules(std::vector<std::string>(rawData.begin()+2, rawData.end()));
    long long result = simulate(originalPolymer, rules, 10);
    return result;
}

long long D14::solveSecond(std::string fileName){
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::string originalPolymer = rawData[0];
    std::map<std::string, char> rules = getRules(std::vector<std::string>(rawData.begin()+2, rawData.end()));
    long long result = simulate(originalPolymer, rules, 40);
    return result;

}
std::map<std::string, char> D14::getRules(std::vector<std::string> rawRules){
    std::map<std::string, char> rules = {};
    for(std::string rawRule : rawRules){
        std::string pair = rawRule.substr(0, 2);
        char result = rawRule.at(6);
        rules.insert(std::make_pair(pair, result));
    }
    return rules;
}

long long D14::simulate(std::string original, std::map<std::string, char> rules, int steps){
    std::vector<long long> letterCount(26, 0);
    std::map<std::string, std::pair<std::string, std::string>> rulesResult = getRulesImplications(rules);
    std::vector<std::string> uniquePairs = {};
    std::vector<long long> pairsCount = {};
    for(int i = 0; i < original.length()-1; i++){
        addPair(uniquePairs, pairsCount, std::string{original.at(i), original.at(i+1)},1);
        letterCount[original.at(i)-65]++;
    }
    letterCount[original.at(original.size()-1)-65]++;
    for(int i = 0; i < steps; i++){
        std::vector<std::string> newUniquePairs = {};
        std::vector<long long> newPairsCount = {};
        for(int j  = 0; j < uniquePairs.size(); j++){
            letterCount[rules.at(uniquePairs[j])-65] += pairsCount[j];
            std::pair<std::string, std::string> producedPairs = rulesResult.at(uniquePairs[j]);
            addPair(newUniquePairs, newPairsCount, producedPairs.first, pairsCount[j]);
            addPair(newUniquePairs, newPairsCount, producedPairs.second, pairsCount[j]);
        }
        uniquePairs = newUniquePairs;
        pairsCount = newPairsCount;
    }
//    for(int i = 0; i < steps; i++){
//        std::string newPolymer = "";
//        for(int j = 0 ; j < currentPolymer.size()-1; j++){
//            std::string currentPair{currentPolymer.at(j), currentPolymer.at(j+1)};
//            newPolymer += currentPolymer.at(j);
//            if(rules.count(currentPair)){
//                newPolymer += rules.at(currentPair);
//            }
//        }
//        newPolymer += currentPolymer.at(currentPolymer.size()-1);
//        currentPolymer = newPolymer;
//    }
//    return currentPolymer;
    long long result = *std::max_element(letterCount.begin(), letterCount.end()) - findMin(letterCount);
    return result;
}

long long D14::getDifference(std::string polymer){
    std::vector<std::pair<char, int>> count = {};
    std::vector<char> uniqueMolecules = getUnique(polymer);
    for(char molecule : uniqueMolecules){
        count.push_back(std::make_pair(molecule, std::count(polymer.begin(), polymer.end(), molecule)));
    }
    long long max = 0;
    long long min = std::numeric_limits<long long>::max();
    for(std::pair<char,int> moleculeData : count){
        if(moleculeData.second > max){
            max = moleculeData.second;
        }
        if(moleculeData.second < max){
            min = moleculeData.second;
        }
    }
    return max-min;
}

std::vector<char> D14::getUnique(std::string polymer){
    std::vector<char> result = {};
    for(char molecule : polymer){
        if(std::find(result.begin(), result.end(), molecule) == result.end()){
            result.push_back(molecule);
        }
    }
    return result;
}

std::map<std::string, std::pair<std::string, std::string>> D14::getRulesImplications(std::map<std::string, char> rules){
    std::map<std::string, std::pair<std::string, std::string>> result = {};
    for(std::pair<std::string, char> rule : rules){
        std::pair<std::string, std::string> implication =
                std::make_pair(std::string{rule.first.at(0), rule.second},
                               std::string{rule.second, rule.first.at(1)});
        result.insert(std::make_pair(rule.first, implication));
    }
    return result;
}

void D14::addPair(std::vector<std::string> &uniquePairs, std::vector<long long> &pairsCount, std::string pair, long long number){
  bool found = false;
  for(int i = 0; i < uniquePairs.size(); i++){
      if(uniquePairs[i] == pair){
          found = true;
          pairsCount[i] += number;
      }
  }
  if(!found){
      uniquePairs.push_back(pair);
      pairsCount.push_back(number);
  }
}

long long D14::findMin(std::vector<long long> values){
    long long min = 1000000000000000;
    for(long long value : values){
        if (value != 0 && value < min){
            min = value;
        }
    }
    return min;
}