#include <iostream>

#include "helicopter.h"
#include "bird.h"

int main()
{
    Helicopter vehicle1(0, 100, "Helicopter");
    vehicle1.fly();
    vehicle1.land();
    vehicle1.takeOff();

    Bird bird1("turkey", 1, 2, "tru-tru", FEMALE);
    bird1.land();
    bird1.fly();
    bird1.takeOff();

    return 0;
}
