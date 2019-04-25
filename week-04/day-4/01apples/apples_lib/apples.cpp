//
// Created by Kata on 2019. 04. 25..
//

#include "apples.h"

std::string getApples()
{
    return "appl";
}

int sumApples(std::vector<int> vectorSum)
{
    int sum = 0;
    for (int i = 0; i < vectorSum.size(); i++) {
        sum = sum + vectorSum.at(i);
    }
    return sum;
}