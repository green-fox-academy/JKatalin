#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{
    FILE *file = fopen("../my-file.txt", "w");

    if (file == NULL) {
        printf("Unable to open file");
    } else {
        fputs("Is it a sentence.\n", file);
        fputs("I am tired.\n", file);
        fputs("I have lot of exercise left.\n", file);
    }

    fclose(file);

    FILE *filer = fopen("../my-file.txt", "r");
    if (filer == NULL) {
        printf("Unable to open file");
    } else {
        char sentence[50];
        while (fgets(sentence, 50, filer) != NULL) {
            fprintf(stdout, "%s", sentence);
            //fputs(sentence, stdout);
            //printf("%s", sentence);           every way is a good solution
            //puts(sentence);                   here the only different is the plus new line
        }
    }

    fclose(filer);

    return 0;
}