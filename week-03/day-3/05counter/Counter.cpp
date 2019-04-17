//
// Created by Kata on 2019. 04. 17..
//

#include "Counter.h"

Counter::Counter (int value){
    setValue(value);
    _tempValue = value;
}

void Counter::setValue(int value) {
    _value = value;
}

int Counter::get() {
    return _value;
}

void Counter::add(int number) {
    _value = _value + number;
}

void Counter::add() {
    _value++;
}

/*void Counter::get() {
    _value = _value;
}*/

void Counter::reset() {
    _value = _tempValue;
}
