#include <stdio.h>
#include <string.h>

int isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int isStringPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    char str[100];

    printf("Enter a number: ");
    scanf("%d", &num);
    if (isNumberPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    printf("Enter a string: ");
    scanf("%s", str);
    if (isStringPalindrome(str))
        printf("\"%s\" is a palindrome string.\n", str);
    else
        printf("\"%s\" is not a palindrome string.\n", str);

    return 0;
}
