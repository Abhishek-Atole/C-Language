#include<stdio.h>

// Function to calculate the addition of two numbers
int addition(int No1, int No2)
{
    int sum = 0;  // Declare a variable to store the sum
    sum = No1 + No2;  // Calculate the sum of No1 and No2
    return sum;  // Return the sum
}

// Function to calculate the subtraction of two numbers
int subtraction(int No3, int No4)
{
    int Difference = 0;  // Declare a variable to store the difference
    Difference = No3 - No4;  // Calculate the difference between No3 and No4
    return Difference;  // Return the difference
}

// Function to calculate the multiplication of two numbers
int Multiplication(int No5, int No6)
{
    int multiplication = 0;  // Declare a variable to store the multiplication result
    multiplication = No5 * No6;  // Calculate the product of No5 and No6
    return multiplication;  // Return the product
}

int main()
{
    int value1 = 0, value2 = 0;  // Declare two variables to store the input values
    int Add = 0, Sub = 0, Multiply = 0;  // Declare variables to store the results of addition, subtraction, and multiplication

    // Take input for the first value
    printf("Enter the 1st Value: ");
    scanf("%d", &value1);  // Read the first value from the user

    // Take input for the second value
    printf("Enter the 2nd Value: ");
    scanf("%d", &value2);  // Read the second value from the user

    // Call the functions and store the results
    Add = addition(value1, value2);  // Calculate addition
    Sub = subtraction(value1, value2);  // Calculate subtraction
    Multiply = Multiplication(value1, value2);  // Calculate multiplication

    // Print the results
    printf("Addition is: %d\n", Add);
    printf("Subtraction is: %d\n", Sub);
    printf("Multiplication is: %d\n", Multiply);

    return 0;  // Return 0 to indicate successful execution
}