#include <iostream>

int main(int argc, char *args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;

    std::cout << "BMI:" << massInKg / (heightInM * heightInM) << std::endl;

    return 0;
}


// Print the Body mass index (BMI) based on these values