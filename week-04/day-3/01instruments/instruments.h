//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_01INSTRUMENTS_INSTRUMENTS_H
#define INC_01INSTRUMENTS_INSTRUMENTS_H

#include <iostream>

class Instruments {
public:
    Instruments(std::string name);
    virtual void play() = 0;

protected:
    std::string _name;

};


#endif //INC_01INSTRUMENTS_INSTRUMENTS_H
