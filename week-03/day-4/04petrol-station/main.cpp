#include <iostream>
#include <vector>

#include "station.h"

int main() {
    Station mok(500);
    std::vector<Car> cars;
    cars.push_back(Car(50, 60));
    cars.push_back(Car(45, 50));
    cars.push_back(Car(53, 60));
    cars.push_back(Car(38, 40));
    cars.push_back(Car(20, 28));

    for (unsigned int i = 0; i < cars.size(); i++) {
        int remaining = mok.filling(cars.at(i));
        std::cout << "The remaining gas amount of the station is: " << remaining << std::endl;
    }


    return 0;
}