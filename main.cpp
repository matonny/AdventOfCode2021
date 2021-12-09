#include <iostream>

#include "D1.h"
#include "Reader.h"
int main()
{
    std::cout << "Solution to 1st problem of Day 1 is: ";
    std::cout << D1::solveFirst("D1_1") << std::endl;
    std::cout << "Solution to 2nd problem of Day 1 is: ";
    std::cout << D1::solveSecond("D1_1") << std::endl;
    return 0;
}
