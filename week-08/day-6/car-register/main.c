#include <stdio.h>
#include <string.h>

enum transmission_t {
    MANUAL, AUTOMATIC, CVT, SEMI_AUTOMATIC, DUAL_CLUTCH
};

typedef struct {
    char name[256];
    float price;
    int year;
    enum transmission_t type;
} car_t;

int get_cars_older_than(car_t *cars, int array_length, int age);

int get_transmission_count(car_t *cars, int array_length, enum transmission_t transmission);

int main()
{
    car_t car1;
    car1.price = 30000;
    strcpy(car1.name, "BMW");
    car1.year = 1950;
    car1.type = MANUAL;

    car_t car2;
    car2.price = 25000;
    strcpy(car2.name, "Volvo");
    car2.year = 2000;
    car2.type = AUTOMATIC;

    car_t car3;
    car3.price = 40000;
    strcpy(car3.name, "Ford");
    car3.year = 2015;
    car3.type = CVT;

    car_t cars[] = {car1, car2, car3};
    int size = 3;
    int age = 2;

    printf("%d\n", get_cars_older_than(cars, size, age));
    printf("%d\n", get_transmission_count(cars, size, SEMI_AUTOMATIC));

    return 0;
}

int get_cars_older_than(car_t *cars, int array_length, int age)
{
    int counter = 0;
    for (int i = 0; i < array_length; i++) {
        int car_age = 2019 - cars[i].year;
        if (car_age > age) {
            counter++;
        }
    }
    return counter;
}

int get_transmission_count(car_t *cars, int array_length, enum transmission_t transmission)
{
    int counter = 0;
    for (int i = 0; i < array_length; i++) {
        //enum transmission_t test = cars[i].type;
        if (cars[i].type == transmission) {
            counter++;
        }
    }
    return counter;
}
