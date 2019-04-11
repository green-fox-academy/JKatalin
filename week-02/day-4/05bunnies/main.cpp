#include <iostream>

int earsRecursion(int b);

int main() {
    int b = 23;

    std::cout << earsRecursion(b) << std::endl;

    return 0;
}

int earsRecursion(int b) {
    if (b < 1) {
        return b;
    } else {
        return 2 + earsRecursion(b - 1);
    }
}