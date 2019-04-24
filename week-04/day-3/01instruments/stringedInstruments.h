//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_01INSTRUMENTS_STRINGEDINSTRUMENTS_H
#define INC_01INSTRUMENTS_STRINGEDINSTRUMENTS_H

#include "instruments.h"

class StringedInstruments : public Instruments {
public:
    StringedInstruments(std::string name, int numberOfStrings);
    virtual std::string sound() = 0;
    void play() override;

private:
    int _numberOfStrings;

};


#endif //INC_01INSTRUMENTS_STRINGEDINSTRUMENTS_H
