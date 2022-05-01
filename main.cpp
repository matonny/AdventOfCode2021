#include <iostream>

#include "Day1/D1.h"
#include "Day2/D2.h"
#include "Day3/D3.h"
#include "Day4/D4.h"
#include "Day5/D5.h"
#include "Day6/D6.h"
#include "Day7/D7.h"
#include "Day8/D8.h"
#include "Day9/D9.h"
#include "Day10/D10.h"
#include "Day11/D11.h"
#include "Day12/D12.h"
#include "Day13/D13.h"
#include "Day14/D14.h"
#include "Day15/D15.h"

int main()
{
    std::cout << "Solution to 1st problem of Day 1 is: ";
    std::cout << D1::solveFirst("D1_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 1 is: ";
    std::cout << D1::solveSecond("D1_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 2 is: ";
    std::cout << D2::solveFirst("D2_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 2 is: ";
    std::cout << D2::solveSecond("D2_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 3 is: ";
    std::cout << D3::solveFirst("D3_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 3 is: ";
    std::cout << D3::solveSecond("D3_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 4 is: ";
    std::cout << D4::solveFirst("D4_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 4 is: ";
    std::cout << D4::solveSecond("D4_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 5 is: ";
    std::cout << D5::solveFirst("D5_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 5 is: ";
    std::cout << D5::solveSecond("D5_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 6 is: ";
    std::cout << D6::solveFirst("D6_1") << std::endl;
    std::cout << "Solution to 1st problem of Day 7 is: ";
    std::cout << D7::solveFirst("D7_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 7 is: ";
    std::cout << D7::solveSecond("D7_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 8 is: ";
    std::cout << D8::solveFirst("D8_1") << std::endl;
    std::cout << "Soultion to 2nd problem of Day 8 is: ";
    std::cout << D8::solveSecond("D8_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 9 is: ";
    std::cout << D9::solveFirst("D9_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 9 is: ";
    std::cout << D9::solveSecond("D9_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 10 is: ";
    std::cout << D10::solveFirst("D10_1") << std::endl;
    std::cout << "Soultion to 2nd problem of Day 10 is: ";
    std::cout << D10::solveSecond("D10_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 11 is: ";
    std::cout << D11::solveFirst("D11_2") << std::endl;
    std::cout << "Soultion to 2nd problem of Day 11 is: ";
    std::cout << D11::solveSecond("D11_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 12 is: ";
    std::cout << D12::solveFirst("D12_1") << std::endl;
    std::cout << "Soultion to 2nd problem of Day 12 is: ";
    std::cout << D12::solveSecond("D12_1") << std::endl;
    std::cout << "Soultion to 1st problem of Day 13 is: " << std::endl;
    std::cout << D13::solveFirst("D13_2_Dots", "D13_2_Folds") << std::endl;
    D13::solveSecond("D13_1_Dots", "D13_1_Folds");
    std::cout << "Soultion to 1st problem of Day 14 is: ";
    std::cout << D14::solveFirst("D14_2") << std::endl;
    std::cout << "Soultion to 2st problem of Day 14 is: ";
    std::cout << D14::solveSecond("D14_1") << std::endl;
    D15 solution15 =  D15();
    std::cout << "Soultion to 1st problem of Day 15 is: ";
    std::cout << solution15.solveFirst("D15_1") << std::endl;
    std::cout << "Soultion to 2nd problem of Day 15 is: ";
    std::cout << solution15.solveSecond("D15_1") << std::endl;
}
