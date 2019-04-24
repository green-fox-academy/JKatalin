//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_01INSTRUMENTS_VIOLIN_H
#define INC_01INSTRUMENTS_VIOLIN_H

#include "stringedInstruments.h"

class Violin : public StringedInstruments{
public:
    Violin(int numberOfStrings = 4);

    std::string sound() override;
};


#endif //INC_01INSTRUMENTS_VIOLIN_H
