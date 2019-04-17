//
// Created by Kata on 2019. 04. 17..
//

#ifndef INC_05COUNTER_COUNTER_H
#define INC_05COUNTER_COUNTER_H

#include <iostream>


class Counter {
public:
    Counter(int value = 0);

    int get() ;
    void setValue(int value);

    void add(int number);
    void add();
    //void get();
    void reset();

private:
    int _value;
    int _tempValue;

};


#endif //INC_05COUNTER_COUNTER_H
