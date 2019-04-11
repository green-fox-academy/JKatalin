#include <iostream>

int powerRecursion(int base, int n);

int main() {

    int base = 3;
    int n = 4;

    std::cout << powerRecursion(base, n) << std::endl;

    return 0;
}


int powerRecursion(int base, int n) {
    if (n == 1) {
        return base;
    } else {
        return base * powerRecursion(base, n-1);
    }

}