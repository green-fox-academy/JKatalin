#include <iostream>
#include <string>

int sumdigitRecursion(int n);

int main() {
    int n = 4;
    std::cout << sumdigitRecursion(n) << std::endl;

    return 0;
}

int sumdigitRecursion(int n) {
    if (std::to_string(n).length()<2) {
        return n;
    } else {
        return n % 10 + sumdigitRecursion(n / 10);
    }
}