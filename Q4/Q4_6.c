#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    char ascii_char = (char)num;

    printf("ASCII character for %d: %c\n", num, ascii_char);
    printf("ASCII value of '%c': %d\n", ascii_char, (int)ascii_char);

    return 0;
}