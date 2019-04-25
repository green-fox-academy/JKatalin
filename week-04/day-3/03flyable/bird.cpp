//
// Created by Kata on 2019. 04. 24..
//

#include "bird.h"

Bird::Bird(std::string name, int age, int numberOfLeg, std::string voice, Gender gender) : Animal(name, age,
                                                                                                  numberOfLeg, voice,
                                                                                                  gender)
{
}

void Bird::land()
{
    std::cout << "Some birds land on water." << std::endl;
}

void Bird::fly()
{
    std::cout << "Most of the birds can fly." << std::endl;
}

void Bird::takeOff()
{
    std::cout << "Some birds take off from tree." << std::endl;
}

void Bird::getName()
{
}

void Bird::breed()
{
}
