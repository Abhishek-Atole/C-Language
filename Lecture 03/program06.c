#include <stdio.h>

// Function to perform addition
int addition(int num1, int num2) 
{
    return num1 + num2;
}

// Function to perform subtraction
int subtraction(int num1, int num2) 
{
    return num1 - num2;
}

// Function to perform multiplication
int multiplication(int num1, int num2)
{
    return num1 * num2;
}

int main() {
    int value1 = 20;
    int value2 = 31;
    int additionResult = 0;
    int subtractionResult = 0;
    int multiplicationResult = 0;

    // Perform operations
    additionResult = addition(value1, value2);
    subtractionResult = subtraction(value1, value2);
    multiplicationResult = multiplication(value1, value2);

    // Display results
    printf("Addition result: %d\n", additionResult);
    printf("Subtraction result: %d\n", subtractionResult);
    printf("Multiplication result: %d\n", multiplicationResult);
    return 0;
}
