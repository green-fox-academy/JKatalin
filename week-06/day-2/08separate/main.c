#include <stdio.h>
#include "pi.h"


int main()
{
    double radius = 8;
    printf("%.2lf\n", area_circle(radius));

    printf("%.2lf\n", circumference_circle(radius));

    return 0;
}



//Organise the function from the previous excercise to separate .c and .h files
//Create another function which calculates the circumference of a circle
//the radius of the circle should be passed as a parameter
//the function should return the calculated circumference
//circumference = 2 * radius * PI
//this function should be in the same .c and .h files as the one which calculates the area