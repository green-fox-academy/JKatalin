#include <iostream>
#include <string>

std::string appendAFunc(std::string a);

int main(int argc, char* args[]) {

    std::string typo = "Chinchill";
    std::cout << appendAFunc(typo) << std::endl;


    // - Create a string variable named `typo` and assign the value `Chinchill` to it
    // - Write a function called `appendAFunc` that gets a string as an input,
    //   appends an 'a' character to its end and returns with a string
    //
    // - Print the result of `appendAFunc(typo)`

    return 0;
}

std::string appendAFunc(std::string a){
    return (a + "a");
}