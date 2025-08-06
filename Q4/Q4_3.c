#include <stdio.h>
#include <math.h>

int main() {
    float side, area_square, area_cube, base, height, area_triangle;
    
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    area_square = side * side;
    printf("Area of the square: %.2f\n", area_square);
    
    area_cube = 6 * area_square; // 6 * a^2
    printf("Area of the cube: %.2f\n", area_cube);
    
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area_triangle = 0.5 * base * height; // A = 1/2 × b × h
    printf("Area of the triangle: %.2f\n", area_triangle);
    
    return 0;
}