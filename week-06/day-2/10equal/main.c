#include <stdio.h>

int equal(int a, int b);

int main()
{
    int a;
    int b;

    printf("Give me a number:");
    scanf("%d", &a);
    printf("Give me an other number:");
    scanf("%d", &b);

    if(equal(a,b)){
        printf("The two number are equal.");
    }else{
        printf("The two number are not equal.");
    }

    return 0;
}

int equal(int a, int b)
{
    if (a != b) {
        return 0;
    }
    return 1;
}


// Create a program which asks for two integers and stores them separatly
// Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise