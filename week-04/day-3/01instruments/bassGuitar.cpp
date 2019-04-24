//
// Created by Kata on 2019. 04. 24..
//

#include "bassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstruments("Bass guitar", numberOfStrings){
}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

