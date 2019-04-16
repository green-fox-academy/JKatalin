#include <iostream>
#include <fstream>
#include <string>

int main() {
    { //in this way is it a different scope
        std::ofstream myFileIn("../my-file.txt");
        if (myFileIn.is_open()) {
            myFileIn << "The Easter is coming soon\n";
            myFileIn << "Do you like bunnies?\n";
            myFileIn << "Will you paint eggs?\n";
        } else {
            std::cout << "Unable to open." << std::endl;
        }
    }

    std::ifstream myFileOut;
    //myFileOut.exceptions(std::ifstream::failbit | std::ifstream::badbit); //the way for "try", but in this case is not necessary
    //try {
    myFileOut.open("../my-file.txt");
    std::string line;
    if (myFileOut.is_open()) {
        while (std::getline(myFileOut, line)) {
            std::cout << line << std::endl;
        }
    }else {
        std::cout << "Unable to open." << std::endl;
    }
    myFileOut.close();
    //}catch(std::ifstream::failure &e){
    //std::cerr << e.what() << std::endl;
    //}

    return 0;
}


// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, you may use C-programming, although it is not mandatory