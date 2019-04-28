//
// Created by Kata on 2019. 04. 27..
//

#include "tree.h"


Tree::Tree(std::string color, float waterAmount) : Plant(color, waterAmount)
{
}

void Tree::waterAbsorb(float amount)
{
    _waterAmount = _waterAmount + amount * 0.4;
}

bool Tree::waterNeed()
{
    std::cout << _color << " waterlevel: " << _waterAmount << std::endl;
    if (_waterAmount < 10) {
        return true;
    }
    return false;
}
