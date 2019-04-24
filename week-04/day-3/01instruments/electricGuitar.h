//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_01INSTRUMENTS_ELECTRICGUITAR_H
#define INC_01INSTRUMENTS_ELECTRICGUITAR_H

#include "stringedInstruments.h"

class ElectricGuitar : public StringedInstruments {
public:
    ElectricGuitar(int numberOfStrings = 6);

    std::string sound() override;

};


#endif //INC_01INSTRUMENTS_ELECTRICGUITAR_H
