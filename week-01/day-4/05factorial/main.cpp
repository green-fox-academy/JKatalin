#include <iostream>
#include <string>

void factorio(int a, int& start);

int main(int argc, char *args[]) {
    int x = 6;
    int y;
    factorio(x, y);
    std::cout << y << std::endl;

    return 0;
}

void factorio(int a, int& start) {
    start = 1;
    for (int i = 1; i <= a; i++) {
        start = start * i;
    }
}



// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.