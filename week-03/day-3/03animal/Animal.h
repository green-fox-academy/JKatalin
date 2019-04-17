//
// Created by Kata on 2019. 04. 17..
//

#ifndef INC_03ANIMAL_ANIMAL_H
#define INC_03ANIMAL_ANIMAL_H

#include <iostream>


class Animal {
public:
    Animal(int hunger = 50, int thirst = 50);

    void setHunger(int hunger);
    void setThirst(int thirst);

    int getHunger() const;
    int getThirst() const;

    void eat();
    void drink();
    void play();


private:
    int _hunger;
    int _thirst;

};


#endif //INC_03ANIMAL_ANIMAL_H
