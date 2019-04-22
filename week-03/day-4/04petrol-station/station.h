//
// Created by Kata on 2019. 04. 22..
//

#ifndef INC_04PETROL_STATION_STATION_H
#define INC_04PETROL_STATION_STATION_H

#include "car.h"

class Station {
public:
    Station(const int &gasAmount);

    void setGasAmount(int gasAmount);

    int getGasAmount() const;

    int filling(Car &carToBeFilled);


private:
    int _gasAmount;

};


#endif //INC_04PETROL_STATION_STATION_H
