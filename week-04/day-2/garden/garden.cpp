//
// Created by Kata on 2019. 04. 27..
//

#include "garden.h"

void Garden::waterAdd(int water)
{
    std::cout << "Watering with " << water << std::endl;
    int counter = 0;
    int countFlo = 0;
    int countTr = 0;
    for (int i = 0; i < _flowers.size(); i++) {
        if (_flowers.at(i).waterNeed()) {
            countFlo = countFlo + 1;
        }
    }
    for (int i = 0; i < _trees.size(); i++) {
        if (_trees.at(i).waterNeed()) {
            countTr = countTr + 1;
        }
    }
    counter = countFlo + countTr;

    float waterPlant = water / counter;

    for (int i = 0; i < _flowers.size(); i++) {
        if (_flowers.at(i).waterNeed()) {
            _flowers.at(i).waterAbsorb(waterPlant);
        }
    }

    for (int i = 0; i < _trees.size(); i++) {
        if (_trees.at(i).waterNeed()) {
            _trees.at(i).waterAbsorb(waterPlant);
        }
    }
}

void Garden::addFlower(Flower newFlower)
{
    _flowers.push_back(newFlower);
}

void Garden::addTree(Tree newTree)
{
    _trees.push_back(newTree);
}

void Garden::report()
{
    for (int i = 0; i < _flowers.size(); i++) {
        if (_flowers.at(i).waterNeed()) {
            std::cout << "The " << _flowers.at(i).getColor() << " Flower needs water." << std::endl;
        } else {
            std::cout << "The " << _flowers.at(i).getColor() << " Flower does not need water." << std::endl;
        }
    }

    for (int i = 0; i < _trees.size(); i++) {
        if (_trees.at(i).waterNeed()) {
            std::cout << "The " << _trees.at(i).getColor() << " Tree needs water." << std::endl;
        } else {
            std::cout << "The " << _trees.at(i).getColor() << " Tree does not need water." << std::endl;
        }
    }

}
