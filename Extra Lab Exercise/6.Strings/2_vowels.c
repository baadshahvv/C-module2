#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch != ' ') {
            specialChars++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
