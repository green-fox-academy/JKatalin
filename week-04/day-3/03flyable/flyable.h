//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_03FLYABLE_FLYABLE_H
#define INC_03FLYABLE_FLYABLE_H


class Flyable {
public:
    virtual void land() = 0;
    virtual void fly() = 0;
    virtual void takeOff() = 0;

};


#endif //INC_03FLYABLE_FLYABLE_H
