#include <iostream>

int doubling(int a) {
    a *= 2;
    return a;
}

int main(int argc, char *args[]) {
    int baseNum = 123;
    std::cout << "result of doubling " << doubling(baseNum) << std::endl;

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    return 0;
}
