//
// Created by Mateusz Wygonny on 12/12/2021.
//

#ifndef ADVENTOFCODE2021_D4_H
#define ADVENTOFCODE2021_D4_H


#include <utility>
typedef std::vector<std::vector<int>> board;
class D4
{
public:
    static int solveFirst(std::string fileName);
    static int solveSecond(std::string fileName);
    static std::vector<int> rowStringToInt(std::string row, char separator);
    static std::vector<board> getBoards(std::vector<std::string> data);
    static int getScore (std::vector<board> boards, std::vector<int> numbers);
    static int getLastScore (std::vector<board> boards, std::vector<int> numbers);
    static void putNumber(std::vector<board> &crossedBoards, std::vector<board> &boards, int number);
    static int getWinningBoard(std::vector<board> &crossedBoards);
    static bool isWinning(board &testedBoard);
    static int getBoardValue(board &targetBoard);
};


#endif //ADVENTOFCODE2021_D4_H
