#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    int ai[] = {3, 4, 5, 6, 7};

    int a = 0;
    for (int i = 0; i < sizeof(ai) / sizeof(ai[0]); i++) {
        a = a + ai[i];
    }
    std::cout << a << std::endl;

    return 0;
}


// - Create an array variable named `ai`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Print the sum of the elements in `ai`
