#include <iostream>

#include "animal.h"
#include "farm.h"

int main()
{
    Animal cat("cat");
    cat.eat();
    std::cout << cat.getHunger() << std::endl;

    Animal dog("dog");
    dog.drink();
    std::cout << dog.getThirst() << std::endl;

    Animal bunny("bunny");
    bunny.play();
    std::cout << bunny.getHunger() << ", " << bunny.getThirst() << std::endl;

    Farm farm(0);

    farm.printAnimal();

    farm.addAnimal(&cat);
    farm.addAnimal(&bunny);

    cat.eat();
    std::cout << cat.getHunger() << std::endl;

    farm.printAnimal();

    farm.breed(&dog);

    farm.printAnimal();

    farm.slaughter();

    farm.printAnimal();

    farm.breed(&dog);

    farm.printAnimal();


    return 0;
}