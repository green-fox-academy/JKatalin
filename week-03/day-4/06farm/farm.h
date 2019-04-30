//
// Created by Kata on 2019. 04. 29..
//

#ifndef INC_06FARM_FARM_H
#define INC_06FARM_FARM_H

#include <iostream>
#include <vector>

#include "animal.h"

class Farm {
public:
    Farm(int slots);

    void breed(Animal *newAnimal);
    void slaughter();
    void addAnimal(Animal *animal);
    void printAnimal();

private:
    std::vector<Animal *> _animals;
    int _slots;

};


#endif //INC_06FARM_FARM_H
