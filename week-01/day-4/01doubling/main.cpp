#include <iostream>

void doubling(int& a);

int main() {
    int baseNum = 123;
    doubling(baseNum);
    std::cout << baseNum << std::endl;

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    return 0;
}

void doubling(int& a) {
    a *= 2;
}