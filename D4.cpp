//
// Created by Mateusz Wygonny on 12/12/2021.
//

#include <string>
#include "D4.h"
#include "Reader.h"

constexpr int boardWidth = 5;

int D4::solveFirst(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<int> chosenNumbers = rowStringToInt(rawData[0], ',');
    std::vector<board> allBoards = getBoards(std::vector<std::string>{rawData.begin()+2, rawData.end()});
    int score = getScore(allBoards, chosenNumbers);
    return score;
}
std::vector<int> D4::rowStringToInt(std::string row, char separator) {
    std::vector<int> result = {};
    std::string currentNumber = "";
    for(char digit : row){
        if(digit == separator){
            if(currentNumber!=""){
                result.push_back(std::stoi(currentNumber));
                currentNumber = "";
            }
        }else{
            currentNumber += digit;
        }
    }
    result.push_back(std::stoi(currentNumber));
    return result;
}
std::vector<board> D4::getBoards(std::vector<std::string> data){
    std::vector<board> result = {};
    board currBoard = {};
    for(std::string row : data){
        if(row != ""){
            currBoard.push_back(rowStringToInt(row, ' '));
        }else{
            result.push_back(currBoard);
            currBoard = {};
        }
    }
    result.push_back(currBoard);
    return result;
}
int D4::getScore(std::vector<board> boards, std::vector<int> numbers){
    std::vector<board> crossedBoards(boards.size(), board(5, std::vector<int>(5, -1)));
    for(int number : numbers){
        putNumber(crossedBoards, boards, number);
        int winnerNum = getWinningBoard(crossedBoards);
        if(winnerNum != -1){
            return getBoardValue(boards[winnerNum])*number;
        }
    }
}
void D4::putNumber(std::vector<board> &crossedBoards, std::vector<board> &boards, int number){
    for(int i = 0; i < boards.size(); i++){
        for(int j = 0; j < boardWidth; j++){
            for(int k = 0; k < boardWidth; k++){
                if(boards[i][j][k] == number){
                    crossedBoards[i][j][k] = number;
                    boards[i][j][k] = -1;
                }
            }
        }
    }
}
int D4::getWinningBoard(std::vector<board> &crossedBoards) {
    for(int i = 0; i < crossedBoards.size(); i++){
        if(isWinning(crossedBoards[i])){
            return i;
        }
    }
    return -1;
}
bool D4::isWinning(board &testedBoard) {
    for(int i = 0; i < boardWidth; i++){
        bool winningRow = true;
        bool winningColumn = true;
        for(int j = 0; j < boardWidth; j++){
            if(testedBoard[i][j] == -1){
                winningColumn = false;
            }
            if(testedBoard[j][i] == -1){
                winningRow = false;
            }
        }
        if(winningColumn || winningRow){
            return true;
        }
    }
    return false;
}
int D4::getBoardValue(board &targetBoard) {
    int sum = 0;
    for(std::vector<int> row : targetBoard){
        for(int number : row){
            if(number != -1){
                sum += number;
            }
        }
    }
    return sum;
}
int D4::solveSecond(std::string fileName) {
    std::vector<std::string> rawData = Reader::getFile(fileName);
    std::vector<int> chosenNumbers = rowStringToInt(rawData[0], ',');
    std::vector<board> allBoards = getBoards(std::vector<std::string>{rawData.begin()+2, rawData.end()});
    int score = getLastScore(allBoards, chosenNumbers);
    return score;
}
int D4::getLastScore(std::vector<board> boards, std::vector<int> numbers) {
    std::vector<board> crossedBoards(boards.size(), board(5, std::vector<int>(5, -1)));
    std::pair<board, int> lastBoard;
    for(int number : numbers){
        putNumber(crossedBoards, boards, number);
        int winnerNum = getWinningBoard(crossedBoards);
        while(winnerNum != -1){
            lastBoard.first = boards[winnerNum];
            lastBoard.second = number;
            boards.erase(boards.begin() + winnerNum);
            crossedBoards.erase(crossedBoards.begin() + winnerNum);
            winnerNum = getWinningBoard(crossedBoards);
        }
    }
    return getBoardValue(lastBoard.first)*lastBoard.second;
}