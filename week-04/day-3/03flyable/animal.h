//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_03FLYABLE_ANIMAL_H
#define INC_03FLYABLE_ANIMAL_H

#include <iostream>

enum Gender {
    MALE,
    FEMALE
};

class Animal {
public:
    Animal(std::string name, int age, int numberOfLeg, std::string voice, Gender gender);

    virtual void getName() = 0;
    virtual void breed() = 0;
    std::string getGenderAsString();

private:
    std::string _name;
    int _age;
    int _numberOfLeg;
    std::string _voice;
    Gender _gender;

};


#endif //INC_03FLYABLE_ANIMAL_H
