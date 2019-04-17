#include <iostream>

#include "Animal.h"

int main() {
    Animal cat;
    cat.eat();
    std::cout << cat.getHunger() << std::endl;

    Animal dog;
    dog.drink();
    std::cout << dog.getThirst() << std::endl;

    Animal bunny;
    bunny.play();
    std::cout << bunny.getHunger() << ", " << bunny.getThirst() << std::endl;

    return 0;
}