#include <iostream>

int main() {
    int a = 20;
    int b = 17;

    int *aptr = &a;
    *aptr += 5;

    int *bptr = &b;
    *bptr += 10;

    std::cout << a << " " << b << " "<< *aptr + *bptr << std::endl;

    return 0;
}


// Add two numbers using pointers