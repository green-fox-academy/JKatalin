//
// Created by Kata on 2019. 04. 29..
//

#include "farm.h"

Farm::Farm(int slots) : _slots(slots)
{
}

void Farm::breed(Animal *newAnimal)
{
    if (_slots > 0) {
        _animals.push_back(newAnimal);
    } else {
        std::cout << "There is no free place in the farm." << std::endl;
    }
}

void Farm::slaughter()
{
    int index = 0;
    int minHunger = _animals.at(0)->getHunger();
    for (int i = 0; i < _animals.size(); i++) {
        if (_animals.at(i)->getHunger() < minHunger) {
            minHunger = _animals.at(i)->getHunger();
            std::cout << _animals.at(i);
            index = i;
        }
    }
    std::cout << "The " << _animals.at(index)->getName() << " have to go out of the farm." << std::endl;
    _animals.erase(_animals.begin() + index);
    _slots += 1;
}


void Farm::addAnimal(Animal *animal)
{
    _animals.push_back(animal);
}

void Farm::printAnimal()
{
    if (_animals.empty()) {
        std::cout << "Currently there is no animal in the farm." << std::endl;
    } else {
        for (int i = 0; i < _animals.size(); i++) {
            std::cout << _animals.at(i)->getName() << std::endl;
        }
    }
}



