#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int row;
    std::cout << "Please, enter the number of rows:" << std::endl;
    std::cin >> row;

    int column;
    std::cout << "Please, enter the number of columns:" << std::endl;
    std::cin >> column;

    int matrix[row][column];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
            if ( j == i ) {
                matrix[i][j] = 1;
                std::cout << "1 ";
            } else {
                matrix[i][j] = 0;
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }


    return 0;
}


    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output
