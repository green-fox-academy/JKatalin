//
// Created by Kata on 2019. 04. 27..
//

#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "plant.h"

class Flower : public Plant {
public:
    Flower(std::string color, float waterAmount);

    void waterAbsorb(float amount) override;
    bool waterNeed() override;



};


#endif //GARDEN_FLOWER_H
