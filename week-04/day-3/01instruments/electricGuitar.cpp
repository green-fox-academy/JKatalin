//
// Created by Kata on 2019. 04. 24..
//

#include "electricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstruments("Electric Guitar", numberOfStrings){
}

std::string ElectricGuitar::sound() {
    return "Twang";
}


