#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    std::string animals[] = {"koal", "pand", "zebr"};

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
        animals[i] = animals[i] + "a";
        std::cout << animals[i] << " ";
    }
    std::cout<< std::endl;

    return 0;
}


// - Create an array variable named `animals`
//   with the following content: `["koal", "pand", "zebr"]`
// - Add all elements an `"a"` at the end