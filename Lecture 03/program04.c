//program that performs the addition of two numbers using a function
#include<stdio.h>               // Include the standard input/output library for using printf and other functions
int Addition(int No1, int No2)  // Function to perform addition of two numbers      
{
    int sum = 0;           // Declare a local variable to store the result of the addition
    sum = No1 + No2;            // Add the two input numbers and store the result in sum
    return sum;                 // Return the sum to the caller
}
int main()                      // Main function - entry point of the program                     
{
    int value1 = 10;            // Declare a local variable 'value1' and initialize it with 10
    int value2 = 11;            // Declare a local variable 'value2' and initialize it with 11
    int Ans = 0;                // Declare a local variable 'Ans' to store the result of the addition
    Ans = Addition(value1, value2);            // Call the Addition function with 'value1' and 'value2' as arguments
                                              // Store the returned result in 'Ans'
        printf("Addition is : %d \n", Ans);  // Print the result of the addition to the console

    return 0;                                // Return 0 to indicate that the program executed successfully
}
