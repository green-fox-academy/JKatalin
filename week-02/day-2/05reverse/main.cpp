#include <iostream>
#include <string>

std::string reverse(const std::string &text) {
    //for (auto i = text.end(); i != text.begin(); i--) {
    //std::cout << text.at(i) << std::endl;
    //}

    for (int i = text.length(); i != 0; i--) {
        std::cout << text.at(i - 1);
    }
    std::cout << std::endl;

    for (auto j = --text.end(); j != --text.begin(); j--) {
        std::cout << *j;
    }
    std::cout << std::endl;

    for (auto k = text.rbegin(); k != text.rend(); k++) {
        std::cout << *k;
    }
    std::cout << std::endl;


    std::string reverse;
    for (int i = 0; i < text.length(); i++) {
        reverse += text.at(text.length() - i - 1);
    }
    std::cout << std::endl;

    return reverse;

}


int main(int argc, char *args[]) {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    std::cout << reverse(reversed) << std::endl;

    return 0;
}

// Create a method that can reverse an std:string, which is passed as the parameter
// Use it on this reversed string to check it!
// Try to solve this using .at() first, and optionally anything else after.
// Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.