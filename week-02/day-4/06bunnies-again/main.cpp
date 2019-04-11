#include <iostream>

int earsRecursive(int b);

int main() {
    int b = 6;

    std::cout << earsRecursive(b) << std::endl;
    return 0;
}


int earsRecursive(int b) {
    if (b == 1) {
        return 2;
    } else {
        if (b % 2 == 0) {
            return 3 + earsRecursive(b - 1);
        } else {
            return 2 + earsRecursive(b - 1);
        }
    }
}