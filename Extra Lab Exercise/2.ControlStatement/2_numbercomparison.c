#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;  
    char choice;

    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);
    printf("Choose method (i for if-else, s for switch-case): ");
    scanf(" %c", &choice);


    if (choice == 'i') {
        if (num1 >= num2 && num1 >= num3) {
            largest = num1;
        } else if (num2 >= num1 && num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
        if (num1 <= num2 && num1 <= num3) {
            smallest = num1;
        } else if (num2 <= num1 && num2 <= num3) {
            smallest = num2;
        }   
        else {
            smallest = num3;
        }
        printf("Using if-else:\n");
        printf("Largest number: %d\n", largest);
        printf("Smallest number: %d\n", smallest);
    }

    
    else if (choice == 's') {
        switch ((num1 >= num2) + (num1 >= num3) * 2) {  
            case 3:
                largest = num1;
                break;  
            case 2:
                largest = num2;
                break;
            case 1:
                largest = num3;
                break;
            default:
                largest = num1;
        }
        switch ((num1 <= num2) + (num1 <= num3) * 2) {
            case 3:
                smallest = num1;
                break;
            case 2:
                smallest = num2;
                break;
            case 1:
                smallest = num3;
                break;
            default:
                smallest = num1;    
        }
        printf("Using switch-case:\n");
        printf("Largest number: %d\n", largest);
        printf("Smallest number: %d\n", smallest);
    }
    else {
        printf("Invalid choice. Please enter 'i' for if-else or 's' for switch-case.\n");
    }
    return 0;
}