#include <iostream>
#include "garden.h"

int main()
{
    Garden garden1;
    garden1.addFlower(Flower("blue", 4));
    garden1.addFlower(Flower("yellow", 6));
    garden1.addTree(Tree("purple", 8));
    garden1.addTree(Tree("orange", 2));

    garden1.report();
    std::cout << std::endl;
    garden1.waterAdd(40);
    garden1.report();
    std::cout << std::endl;
    garden1.waterAdd(70);
    garden1.report();

    return 0;
}