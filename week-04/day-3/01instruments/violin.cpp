//
// Created by Kata on 2019. 04. 24..
//

#include "violin.h"

Violin::Violin(int numberOfStrings) : StringedInstruments("Violin", numberOfStrings){
}

std::string Violin::sound() {
    return "Screech";
}
