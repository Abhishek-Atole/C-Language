//Accept Number form the user and check whether that the number is odd or even
#include<stdio.h>   /*# = preprocessor directive    
                      include = use to include the header file
                      stdio.h= standard inout output files */
int main()
{
    int No = 0;                      // Declare an integer variable to store the user's input
    int Ans = 0;                     // Declare an integer variable to store the result of the modulus operation

    printf("Enter Number: ");          // Prompt the user to enter a number
    scanf("%d", &No);                 // Read the user's input into the variable No

    Ans = No % 2;                      // Calculate the remainder when No is divided by 2
    
    if(Ans == 0)                         // If the remainder is 0, the number is even
    {
        printf("Number is Even \n");     // Print "Number is Even"
    }
    else
    {
        printf("Number is Odd \n");     // Print "Number is Odd"
    }

    return 0;                            // Return 0 to indicate successful execution
}
