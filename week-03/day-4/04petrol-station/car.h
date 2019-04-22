//
// Created by Kata on 2019. 04. 22..
//

#ifndef INC_04PETROL_STATION_CAR_H
#define INC_04PETROL_STATION_CAR_H


class Car {
public:
    Car(const int &gasAmount, const int &capacity);

    void setGasAmount(int gasAmount);

    void setCapacity(int capacity);

    int getGasAmount() const;

    int getCapacity() const;

    bool isFull();

    void fill();

private:
    int _gasAmount;
    int _capacity;

};


#endif //INC_04PETROL_STATION_CAR_H
