#include<stdio.h>   /* Preprocessor directive to include the standard input-output header file */

int main()
{
    int No = 0;                      // Declare an integer variable to store the user's input
    int Ans = 0;                     // Declare an integer variable to store the result of the modulus operation

    // Prompt the user to enter a number
    printf("Enter Number: ");
    scanf("%d", &No);                 // Read the user's input into the variable No

    Ans = No % 2;                      // Calculate the remainder when No is divided by 2 and store it in Ans

    // Print the value of Ans (remainder of the division)
    /*printf("Remainder (Ans) is: %d \n", Ans);  // Display the remainder after division by 2*/

    // Check if the remainder is 0; if so, the number is even
    if(Ans == 0)                     
    {
        printf("Number is Even \n");     // If remainder is 0, the number is Even
    }
    else
    {
        printf("Number is Odd \n");      // Otherwise, the number is Odd
    }

    return 0;                            // Return 0 to indicate successful execution
}
