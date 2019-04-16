#include <iostream>
#include <fstream>
#include <string>


void multipleLine(std::string path, std::string word, int number);

int main() {

    std::string myPath = "../multi-line.txt";
    std::string myWord = "pear";
    int myNumber = 4;

    multipleLine(myPath, myWord, myNumber);

    return 0;
}

void multipleLine(std::string path, std::string word, int number) {

    std::ofstream multiFileWrite;
    multiFileWrite.open(path);
    if (multiFileWrite.is_open()) {
        while (number > 0) {
            multiFileWrite << word << "\n";
            number = number - 1;
        }
    } else {
        std::cout << "Unable to open" << std::endl;
    }
    multiFileWrite.close();
}


// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"
