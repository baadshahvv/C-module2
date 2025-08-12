#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concatenated[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 
    strcat(concatenated, str1); 
    strcat(concatenated, str2); 
    printf("Concatenated string: %s\n", concatenated);
    printf("Length of concatenated string: %zu\n", strlen(concatenated));
    return 0;
}