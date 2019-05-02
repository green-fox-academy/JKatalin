//
// Created by Kata on 2019. 05. 01..
//

#ifndef AIRCRAFT_F16_H
#define AIRCRAFT_F16_H

#include "aircraft.h"


class F16 : public Aircraft {
public:
    F16();

    bool isPriority() override;

};

#endif //AIRCRAFT_F16_H
