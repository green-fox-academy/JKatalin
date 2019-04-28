//
// Created by Kata on 2019. 04. 27..
//

#include "flower.h"

Flower::Flower(std::string color, float waterAmount) : Plant(color, waterAmount)
{
}

void Flower::waterAbsorb(float amount)
{
_waterAmount = _waterAmount + amount * 0.75;
}

bool Flower::waterNeed()
{
    if (_waterAmount < 5){
        return true;
    }
    return false;
}




