#include <stdio.h>

int main() {
    float marks;
    char grade;
    printf("Enter the marks of the student: ");
    scanf("%f", &marks);
    if (marks > 90) {
        grade = 'A';
    }
    else if (marks > 75 && marks <= 90) {
        grade = 'B';
    }   
    else if (marks > 50 && marks <= 75) {
        grade = 'C';
    }       
    else {
        grade = 'D';
    }
    printf("The grade for marks %.2f is: %c\n", marks, grade);
    return 0;
}