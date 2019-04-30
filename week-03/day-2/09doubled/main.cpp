#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

void decrypt(std::string fileName);

int main()
{
    std::string doubleFile = "../duplicated-chars.txt";
    /* std::ofstream fileFromWork;
     fileFromWork.open(doubleFile); */

    decrypt(doubleFile);

    return 0;
}

void decrypt(std::string fileName)
{
    std::ifstream readInFile;
    readInFile.exceptions(std::ifstream::badbit);

    try {
        readInFile.open(fileName);

        if (!readInFile.is_open()) {
            std::cout << "Unable to open" << std::endl;
        }

        std::string lines;
        while (std::getline(readInFile, lines)) {

            std::istringstream ssLine(lines);
            std::string words;
            while (std::getline(ssLine, words, ' ')) {
                for (int i = 0; i < words.length(); i++) {
                    std::cout << words.at(i);
                    i++;
                }
                std::cout << ' ';
            }
            std::cout << std::endl;
        }
        readInFile.close();

    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
}
