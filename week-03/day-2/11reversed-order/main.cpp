#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

void reversOrder(std::string path);

int main()
{
    std::string myFile = "../reversed-order.txt";

    reversOrder(myFile);

    return 0;
}

void reversOrder(std::string path)
{
    try {
        std::ifstream myFile;
        myFile.exceptions(std::ifstream::badbit);

        myFile.open(path);
        if (!myFile.is_open()) {
            std::cout << "Unable to open" << std::endl;
        }
        std::string line;
        std::vector<std::string> sentence;
        while (std::getline(myFile, line)) {
            sentence.push_back(line);
        }
        for (int i = sentence.size() - 1; i >= 0; i--) {
            std::cout << sentence[i] << std::endl;
        }

    }catch(std::ios_base::failure &e){
        std::cout << e.what() << std::endl;
    }
}