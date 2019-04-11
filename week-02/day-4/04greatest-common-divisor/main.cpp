#include <iostream>

int commDivRecursion(int a, int b);

int main() {
    int a = 24;
    int b = 15;

    std::cout<<commDivRecursion(a, b)<<std::endl;
    return 0;
}


int commDivRecursion(int a, int b){
    if (b==0){
        return a;
    }else{
        return commDivRecursion(b, a % b);
    }
}