#include <iostream>

int *minimum(int numbers2[7], int sizefunct);

int main()
{
    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int *min;
    min = minimum(numbers, size);

    std::cout<<"Minimum address is:"<< min<<std::endl;
    std::cout<<"Minimum value is:"<< *min<<std::endl;

    return 0;
}

int *minimum(int numbers2[], int sizefunct){
    int *numbersPtr = &numbers2[0];

    for (int i = 0; i < sizefunct; i++){
        if (*numbersPtr>numbers2[i]){
            numbersPtr = &numbers2[i];
        }
    }
    return numbersPtr;


}

 // Create a function which takes an array (and its length) as a parameter
 // and returns a pointer to its minimum value