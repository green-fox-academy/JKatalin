//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_01INSTRUMENTS_BASSGUITAR_H
#define INC_01INSTRUMENTS_BASSGUITAR_H

#include "stringedInstruments.h"

class BassGuitar : public StringedInstruments {

public:
    BassGuitar(int numberOfStrings = 4);

    std::string sound() override;

};


#endif //INC_01INSTRUMENTS_BASSGUITAR_H
