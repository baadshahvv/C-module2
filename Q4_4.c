#include <stdio.h>

int main() {
    int num_students, apples_per_student = 5, total_apples;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    total_apples = num_students * apples_per_student;

    printf("Total apples required: %d\n", total_apples);

    return 0;
}