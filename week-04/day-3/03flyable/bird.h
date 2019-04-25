//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_03FLYABLE_BIRD_H
#define INC_03FLYABLE_BIRD_H

#include "animal.h"
#include "flyable.h"

class Bird : protected Animal, public Flyable {
public:
    Bird(std::string name, int age, int numberOfLeg, std::string voice, Gender gender);

    void land() override;
    void fly() override;
    void takeOff() override;

private:
    virtual void getName();
    virtual void breed();

};


#endif //INC_03FLYABLE_BIRD_H
