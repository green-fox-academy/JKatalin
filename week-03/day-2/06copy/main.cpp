#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful
bool copy(std::string myfile);

int main()
{
    std::string myfile = "../trytext.txt";
    /* std::ofstream myFileIn;
    myFileIn.open(myfile);
    if (myFileIn.is_open()) {
        myFileIn << "The line 1\n";
        myFileIn << "Do you like line2?\n";
        myFileIn << "What do you think about line30?\n";
    } else {
        std::cout << "Unable to open." << std::endl;
    }
    myFileIn.close(); */

    copy(myfile);
    if (copy) {
        std::cout << "The copying was succesfull." << std::endl;
    } else {
        std::cout << "The copying was unsuccesfull." << std::endl;
    }

    return 0;
}

bool copy(std::string myfile)
{
    std::ifstream myfileRead;
    myfileRead.open(myfile);
    if (!myfileRead.is_open()) {
        std::cout << "Unable to open" << std::endl;
        return false;
    }

    std::ofstream fileToCopy;
    fileToCopy.open("../copy.txt");
    if (!fileToCopy.is_open()) {
        std::cout << "Unable to open" << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(myfileRead, line)) {
        fileToCopy << line << std::endl;
    }

    myfileRead.close();
    fileToCopy.close();

    return true;

}
