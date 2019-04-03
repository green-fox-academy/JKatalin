#include <iostream>

int main() {
    int n = 0;
    while (n <= 500) {
        if (n % 2 == 0)
        std::cout << n << std::endl;
        n += 1;
    }

    return 0;
}