#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 51;
    int currentSeconds = 30;
    
    int remainingSeconds = 24*60*60 - (14*60 + 51*60 + 30);

    std::cout << remainingSeconds << std:: endl;


return 0;
}