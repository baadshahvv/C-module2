#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char str[] = "Hello, this is a test string.";
    char buffer[100];

    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }   
    fprintf(file, "%s", str);
    fclose(file);
    printf("String written to file successfully.\n");

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }   
    fgets(buffer, sizeof(buffer), file);
    fclose(file);
    printf("Contents of the file: %s\n", buffer);

    return EXIT_SUCCESS;
}