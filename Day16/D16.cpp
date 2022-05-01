//
// Created by Mateusz Wygonny on 13/01/2022.
//

#include <string>
#include <bitset>
#include "D16.h"

std::string D16::hexToBin(std::string hexNumber){
    int length = 8;
    std::bitset<length> binaryNumber{0xBB};
    std::string binaryDigit = "";
    for(char digit : hexNumber){
        switch (digit){
            case '0':
                binaryDigit += "0000";
                break;
            case '1':
                binaryDigit += "0001";
                break;
            case '2':
                binaryDigit += "0010";
                break;
            case '3':
                binaryDigit += "0011";
                break;
            case '4':
                binaryDigit += "0100";
                break;
            case '5':
                binaryDigit += "0101";
                break;
            case '6':
                binaryDigit += "0110";
                break;
            case '7':
                binaryDigit += "0111";
                break;
            case '8':
                binaryDigit += "1000";
                break;
            case '9':
                binaryDigit += "1001";
                break;
            case 'A':
                binaryDigit += "1010";
                break;
            case 'B':
                binaryDigit += "1011";
                break;
            case 'C':
                binaryDigit += "1100";
                break;
            case 'D':
                binaryDigit += "1101";
                break;
            case 'E':
                binaryDigit += "1110";
                break;
            case 'F':
                binaryDigit += "1111";
                break;
        }
    }
    return binaryDigit;
}