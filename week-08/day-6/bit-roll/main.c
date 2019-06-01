#include <stdio.h>
#include <string.h>

char convert_binary(char *binary);

void file_convert(char *path);

int main()
{
    file_convert("../input.txt");

    return 0;
}

char convert_binary(char *binary)
{
    int num = 0;
    for (int i = 0; i < 8; i++) {
        num = num + ((binary[7 - i] - 48) << i);
    }
    //printf("%c\n", num);

    return num;
}

void file_convert(char *path)
{
    FILE *filer = fopen(path, "r");
    if (filer == NULL) {
        printf("Unable to open file");
    } else {
        char line[1000];
        while (fgets(line, 1000, filer) != NULL) {
            char *binary = strtok(line, " ");
            while (binary != NULL) {
                printf("%c", convert_binary(binary));
                binary = strtok(NULL, " ");
            }
        }
    }

    fclose(filer);
}

