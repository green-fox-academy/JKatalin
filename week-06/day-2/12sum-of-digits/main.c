#include <stdio.h>
#include <stdlib.h>

int digits_sum_is_equal(char number1[], char number2[], int size1, int size2);

int main()
{
    char number1[10];
    char number2[10];

    printf("Please enter the first number:");
    scanf("%s", number1);
    int size1 = sizeof(number1) / sizeof(number1[0]);

    printf("Please enter the second number:");
    scanf("%s", number2);
    int size2 = sizeof(number2) / sizeof(number2[0]);

    printf("%d", digits_sum_is_equal(number1, number2, size1, size2));


    return 0;
}

int digits_sum_is_equal(char number1[], char number2[], int size1, int size2)
{
    int sum1 = 0;
    for (int i = 0; i < size1; i++) {
        int x = number1[i] - '0';
        sum1 = sum1 + x;
        //printf("%d", number1[i]);
    }

    int sum2 = 0;
    for (int i = 0; i < size2; i++) {
        sum2 = sum2 + number2[i] - '0';
        //printf("%d", number2[i]);
    }

    if (sum1 == sum2) {
        return 1;
    }
    return 0;
}


// Create a program which asks for two numbers and stores them
// Create a function which takes two numbers as parameters
// and returns 1 if the sum of the number of digits are equal and 0 otherwise