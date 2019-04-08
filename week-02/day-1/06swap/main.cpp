#include <iostream>

void swapab(int *pa, int *pb);


int main() {
    int a = 10;
    int b = 316;

    std::cout << "Before function: " << a << " " << b << std::endl;

    swapab(&a, &b);
    std::cout << "After function: " << a << " " << b << std::endl;

    return 0;
}

void swapab(int *pa, int *pb) {
     int temp = *pa;
     *pa = *pb;
     *pb = temp;

    //  int *pointA = &a;
     // int *pointB = &b;
     // int temp = *pointA;
    // *pointA = *pointB;
    // *pointB = temp;

     std::cout<< *pa<< *pb<<std::endl;
}

// Create a function which swaps the values of 'a' and 'b'
// This time use a void funtion and pointers