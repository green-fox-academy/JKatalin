//
// Created by Kata on 2019. 04. 24..
//

#include "stringedInstruments.h"

StringedInstruments::StringedInstruments(std::string name, int numberOfStrings) : Instruments(name), _numberOfStrings(numberOfStrings) {
}

void StringedInstruments::play() {
    std::cout << _name << ", a "<< _numberOfStrings <<"-stringed instrument that goes " << sound() <<std::endl;
}
