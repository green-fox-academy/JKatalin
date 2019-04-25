//
// Created by Kata on 2019. 04. 24..
//

#include "animal.h"

Animal::Animal(std::string name, int age, int numberOfLeg, std::string voice, Gender gender) : _name(name), _age(age),
                                                                                               _numberOfLeg(
                                                                                                       numberOfLeg),
                                                                                               _voice(voice),
                                                                                               _gender(gender)
{
}

std::string Animal::getGenderAsString()
{
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}
