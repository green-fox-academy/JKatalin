#include <iostream>

int main(int argc, char* args[]) {
    int a;
    std::cout << "Please, enter a number:"<<std::endl;
    std::cin >> a;

    int b;
    for (b=0; b<a; b++ ){
        int c;
        for (c=0; c<b+1 ; c++){
            std::cout<< "*";
        }
        std::cout<< std::endl;
    }

    return 0;
}