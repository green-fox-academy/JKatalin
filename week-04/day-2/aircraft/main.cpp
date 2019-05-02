#include <iostream>
#include "f16.h"
#include "f35.h"
#include "carrier.h"


int main()
{
    F16 plain1;
    F16 plain2;
    F35 plain3;

    std::cout << plain1.getStatus() << std::endl;
    std::cout << plain1.refill(5) << std::endl;
    std::cout << plain1.getStatus() << std::endl;
    std::cout << plain1.refill(8) << std::endl;
    std::cout << plain1.getStatus() << std::endl;

    Carrier carr1(13, 100);
    carr1.addAircraft(&plain1);
    std::cout << plain1.getStatus() << std::endl;
    carr1.addAircraft(&plain2);
    std::cout << plain2.getStatus() << std::endl;
    carr1.addAircraft(&plain3);
    std::cout << plain3.getStatus() << std::endl;
    std::cout << carr1.getStatus() << std::endl;

    carr1.fill();
    std::cout << carr1.getStatus() << std::endl;


    Carrier carr2(50, 100);
    std::cout << carr2.getStatus() << std::endl;
    carr1.fight(carr2);
    std::cout << carr2.getStatus() << std::endl;
    std::cout << carr1.getStatus() << std::endl;

    
    return 0;
}