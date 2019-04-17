#include <iostream>

#include "Sharpie.h"

int main() {
    int inkDec = 15;

    Sharpie sharpGirl("pink", 2);
    Sharpie sharpBoy("blue", 5);

    std::cout << sharpGirl.getColor() << std::endl;
    std::cout << sharpBoy.getWidth() << std::endl;
    std::cout << sharpGirl.getInkAmount() << std::endl;

    sharpBoy.use(inkDec);
    std::cout << sharpBoy.getInkAmount() << std::endl;

    return 0;
}