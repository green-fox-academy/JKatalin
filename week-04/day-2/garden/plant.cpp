//
// Created by Kata on 2019. 04. 27..
//

#include "plant.h"

Plant::Plant(std::string color, float waterAmount) : _color(color), _waterAmount(waterAmount)
{
}

const std::string &Plant::getColor() const
{
    return _color;
}
