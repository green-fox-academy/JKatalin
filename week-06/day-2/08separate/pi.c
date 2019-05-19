//
// Created by Kata on 2019. 05. 19..
//
#include "pi.h"

double area_circle(double radius)
{
    double area = radius * radius * PI;
    return area;
}

double circumference_circle(double radius)
{
    double circumference = 2 * radius * PI;
    return circumference;
}
