#include <iostream>

int sumRecursion(int n);

int main() {
    int n = 5;
    sumRecursion(n);
    std::cout << sumRecursion(n) << std::endl;
    return 0;
}

int sumRecursion(int n) {
    if (n < 1) {
        return 0;
    } else {
        return n + sumRecursion(n - 1);
    }
}