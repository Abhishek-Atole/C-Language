#include<stdio.h>

// Function to calculate the sum of two numbers
int Addition(int No1, int No2)
{
    int sum = 0;                // Declare and initialize sum to 0
    sum = No1 + No2;            // Calculate the sum of the two numbers
    return sum;                 // Return the sum to the caller
}

int main()
{
    int value1 = 0, value2 = 0;  // Initializing two local variables with some values
    int Ret = 0;                    // To store the result of the addition

    // Taking input from the user for the two values
    printf("Enter the First Value :");
    scanf("%d", &value1);                   // Read the first number
    printf("Enter the Second Value :");
    scanf("%d", &value2);                   // Read the second number

    // Call the Addition function with user-provided values
    Ret = Addition(value1, value2);

    // Print the result of the addition
    printf("Addition is  : %d \n", Ret);

    return 0;
}
