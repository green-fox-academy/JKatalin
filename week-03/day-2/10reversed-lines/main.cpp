#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

void reversedLine(std::string myPath);

int main()
{
    std::string reverseFile = "../reversed-lines.txt";

    reversedLine(reverseFile);

    return 0;
}

void reversedLine(std::string myPath)
{
    try {
        std::ifstream myFile;
        myFile.exceptions(std::ifstream::badbit);
        myFile.open(myPath);

        if (!myFile.is_open()) {
            std::cout << "Unable to open" << std::endl;
        }

        std::string line;
        while (std::getline(myFile, line)) {
            for (int i = line.length() - 1; i >= 0; i--) {
                std::cout << line.at(i);
            }
            std::cout << std::endl;

            /*std::reverse(line.begin(), line.end());     is it also a possible way
            std::cout << line << std::endl;*/
        }
        myFile.close();

    } catch (std::ios_base::failure &e) {
        std::cout << e.what() << std::endl;
    }
}