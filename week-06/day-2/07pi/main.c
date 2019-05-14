#include <stdio.h>

#define PI 3.14

double areaCircle(double radius);

int main()
{
    double radius = 8;
    printf("%.2lf", areaCircle(radius));

    return 0;
}

double areaCircle(double radius)
{
    double area = radius * radius * PI;
    return area;
}

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI