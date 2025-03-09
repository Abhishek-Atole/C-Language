#include <stdio.h>

int main() {
    float Radius = 0.0f;  // Corrected to float
    const float PI = 3.14f;
    float Area = 0.0f;

    printf("Enter the Radius: \n");
    scanf("%f", &Radius);  // Correct format specifier for float

    Area = PI * Radius * Radius;
    printf("Area of the Circle is: %f\n", Area);

    return 0;
}
