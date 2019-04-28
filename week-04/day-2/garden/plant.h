//
// Created by Kata on 2019. 04. 27..
//

#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <iostream>


class Plant {
public:
    Plant(std::string color, float waterAmount);

    virtual void waterAbsorb(float amount) = 0;
    virtual bool waterNeed() = 0;
    const std::string &getColor() const;

protected:
    std::string _color;
    float _waterAmount;

};


#endif //GARDEN_PLANT_H
