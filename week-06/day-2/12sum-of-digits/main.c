#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int digits_sum_is_equal(char number1[], char number2[]);

int main()
{
    char number1[10];
    char number2[10];

    printf("Please enter the first number:");
    scanf("%s", number1);

    printf("Please enter the second number:");
    scanf("%s", number2);

    printf("%d", digits_sum_is_equal(number1, number2));

    return 0;
}

int digits_sum_is_equal(char number1[], char number2[])
{
    int sum1 = 0;
    for (int i = 0; i < strlen(number1); i++) {
        sum1 = sum1 + number1[i] - '0';
        //printf("%d\n", number1[i] - '0');   just for control the code
    }

    int sum2 = 0;
    for (int i = 0; i < strlen(number2); i++) {
        sum2 = sum2 + number2[i] - '0';
        //printf("%d\n", number2[i] - '0');   just for control the code
    }

    if (sum1 == sum2) {
        return 1;
    }
    return 0;
}


// Create a program which asks for two numbers and stores them
// Create a function which takes two numbers as parameters
// and returns 1 if the sum of the number of digits are equal and 0 otherwise