#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer computer;
    computer.cpu_speed_GHz = 5.2;
    computer.ram_size_GB = 50;
    computer.bits = 10;

    printf("The computer speed: %.2f, the ram size is: %d, the bits is: %d\n", computer.cpu_speed_GHz, computer.ram_size_GB, computer.bits);

    Notebook notebook;
    notebook.cpu_speed_GHz = 3.6;
    notebook.ram_size_GB = 20;
    notebook.bits = 8;

    printf("The notebook speed: %.2f, the ram size is: %d, the bits is: %d", notebook.cpu_speed_GHz, notebook.ram_size_GB, notebook.bits);


    return 0;
}