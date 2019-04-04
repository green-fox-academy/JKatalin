#include <iostream>
#include <string>

std::string greet(std::string a);

int main(int argc, char *args[]) {

    std::string al = "Greenfox";

    std::cout << greet(al) << std::endl;

    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    return 0;
}

std::string greet(std::string a) {

    return ("Greetings dear, " + a);
}
