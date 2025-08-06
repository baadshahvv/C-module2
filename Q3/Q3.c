#include <stdio.h>

int main() {
    int integerVar = 42;          // Integer variable
    char charVar = 'A';           // Character variable
    float floatVar = 3.14;       // Floating-point variable

    const int constantVar = 100;  // Constant integer

    printf("Integer Variable: %d\n", integerVar);
    printf("Character Variable: %c\n", charVar);
    printf("Floating-point Variable: %.2f\n", floatVar);
    printf("Constant Variable: %d\n", constantVar);

    return 0;
}