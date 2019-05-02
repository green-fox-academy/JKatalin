//
// Created by Kata on 2019. 05. 01..
//

#ifndef AIRCRAFT_F35_H
#define AIRCRAFT_F35_H

#include "aircraft.h"

class F35 : public Aircraft {
public:
    F35();

    bool isPriority() override;

};


#endif //AIRCRAFT_F35_H
