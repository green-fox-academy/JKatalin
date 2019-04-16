#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream myFileWrite;
    myFileWrite.open("../my-file.txt");
    if (myFileWrite.is_open()) {
        myFileWrite << "Katalin Beres-Jokay";
    } else {
        std::cout << "Unable to open the file" << std::endl;
    }
    myFileWrite.close();

    return 0;
}

// Open a file called "my-file.txt"
// Write your name in it as a single line