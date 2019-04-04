#include <iostream>
#include <string>

int sum(int a);

int main(int argc, char *args[]) {
    int x = 5;
    std::cout << sum(x) << std::endl;

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    return 0;
}

int sum(int a) {
    int start = 0;
    for (int i = 0; i < a; i++) {
        start = start + i;
    }
    return start;
}
