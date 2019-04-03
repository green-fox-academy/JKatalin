#include <iostream>

int main() {

    int a = 3 + 10;
    // make the "a" variable's value bigger by 10

    std::cout << a << std::endl;

    int b = 100 - 7;
    // make b smaller by 7

    std::cout << b << std::endl;

    int c = 44 * 2;
    // please double c's value

    std::cout << c << std::endl;

    int d = 125 / 5;
    // please divide by 5 d's value

    std::cout << d << std::endl;


    int a2 = 3;
    // make the "a" variable's value bigger by 10
    a2 += 10;
    std::cout << a << std::endl;

    int b2 = 100;
    // make b smaller by 7
    b2 -= 7;
    std::cout << b << std::endl;

    int c2 = 44;
    // please double c's value
    c2 *= 2;
    std::cout << c << std::endl;

    int d2 = 125;
    // please divide by 5 d's value
    d2 /= 5;
    std::cout << d << std::endl;


    int e = 8 * 8 * 8;
    // please cube of e's value

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)
    if (f1 > f2) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    };


    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    if (g2 * 2 > g1) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    };


    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)
    if (h % 11 == 0) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    }


    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)
    if (i1 > i2 * i2 && i1 < i2 * i2 * i2) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    };


    int j = 1521;
// tell if j is dividable by 3 or 5 (print as a boolean)
    if (j % 3 == 0 || j % 5 == 0) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    };


    return 0;
}