#include <stdio.h>

void reverseString(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
