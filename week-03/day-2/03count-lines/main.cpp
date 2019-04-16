#include <iostream>
#include <fstream>
#include <string>

int countLines(std::string myFile);

int main () {

    std::ofstream myFileIn;
    myFileIn.open("../my-file.txt");
    if (myFileIn.is_open()) {
        myFileIn << "something else\n";
        myFileIn << "nothing else\n";
        myFileIn << "anything\n";
    } else {
        std::cout << "Unable to open." << std::endl;
    }
    myFileIn.close();

    std::string myFile = "../my-file.txt";

    std::cout << countLines(myFile) <<std::endl;

    return 0;
}


int countLines(std::string myFile){
    std::ifstream myFileRead;
    myFileRead.open(myFile);

    if(myFileRead.is_open()){
        int row = 0;
        std::string line;
        while (std::getline(myFileRead,line)){
            row = row + 1;
        }
        return row;
    }else{
        return 0;
    }
}

    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

   // std::string myFile = "alma.txt";
