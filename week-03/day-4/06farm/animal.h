//
// Created by Kata on 2019. 04. 29..
//

#ifndef INC_06FARM_ANIMAL_H
#define INC_06FARM_ANIMAL_H


#include <iostream>


class Animal {
public:
    Animal(std::string name, int hunger = 50, int thirst = 50);

    void setHunger(int hunger);
    void setThirst(int thirst);

    int getHunger() const;
    int getThirst() const;
    const std::string &getName() const;

    void eat();
    void drink();
    void play();


private:
    int _hunger;
    int _thirst;
    std::string _name;

};

#endif //INC_06FARM_ANIMAL_H
