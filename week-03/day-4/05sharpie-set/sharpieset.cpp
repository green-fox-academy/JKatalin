//
// Created by Kata on 2019. 04. 22..
//

#include "sharpieset.h"

void Sharpieset::addSharpie(Sharpie *sharpie)
{
    _sharpies.push_back(sharpie);
}

void Sharpieset::countUsable()
{
    int usable = 0;
    for (int i = 0; i < _sharpies.size(); i++) {
        if (_sharpies.at(i)->getInkAmount() > 0) {
            usable++;
        }
    }
    std::cout << "The number of usable sharpies is: " << usable << std::endl;
}

void Sharpieset::removeTrash()
{
    std::cout << "The unusable sharpies is: ";
    //std::vector<std::string> unusable;   not necessary here a vector, because we don't use later, and it takes more memory
    for (int i = 0; i < _sharpies.size(); i++) {
        if (_sharpies.at(i)->getInkAmount() <= 0) {
            _sharpies.erase(_sharpies.begin() + i);
            //unusable.push_back(_sharpies.at(i)->getColor());
            std::cout << _sharpies.at(i)->getColor() << " ";
        }
    }
    std::cout << std::endl;

    //for (int i = 0; i < unusable.size(); i++){
   //     std::cout << unusable.at(i) << " ";
   // }
   // std::cout << std::endl;
}

void Sharpieset::printSet()
{
    for (int i = 0; i < _sharpies.size(); ++i) {
        std::cout << "There is a sharpie: " << _sharpies.at(i)->getColor() << " with ink amount: "
                  << std::to_string(_sharpies.at(i)->getInkAmount()) << std::endl;
    }
}