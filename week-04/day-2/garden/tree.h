//
// Created by Kata on 2019. 04. 27..
//

#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H

#include "plant.h"

class Tree : public Plant {
public:
    Tree(std::string color, float waterAmount);

    void waterAbsorb(float amount) override;

    bool waterNeed() override;
};


#endif //GARDEN_TREE_H
