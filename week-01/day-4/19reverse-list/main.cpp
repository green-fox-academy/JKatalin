#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    int aj[] = {3, 4, 5, 6, 7};

    int ja[sizeof(aj) / sizeof(aj[0])];
    for (int i = 0; i < (sizeof(aj) / sizeof(aj[0])); i++) {
        ja[i] = aj[sizeof(aj) / sizeof(aj[0]) - 1 - i];
        std::cout << ja[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


// - Create an array variable named `aj`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Reverse the order of the elements in `aj`
// - Print the elements of the reversed `aj`