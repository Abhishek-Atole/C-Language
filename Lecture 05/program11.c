// Selection02.c
// This program takes a student's standard (grade level) as input and prints their exam time.

#include <stdio.h> // Standard Input-Output header file for using printf() and scanf()

int main() 
{
    // Declare an integer variable 'Standard' to store the user input
    int Standard = 0;

    // Display the portal message
    printf("Primary School Portal \n");

    // Prompt the user to enter their standard (grade)
    printf("Enter Your Division : ");
    
    // Read the user input and store it in the variable 'Standard'
    // The '&' (address-of operator) is used to pass the memory address of 'Standard' to scanf()
    scanf("%d", &Standard);

    // If-else ladder to check the entered standard and print the corresponding exam time
    if (Standard == 1) // If the user enters 1
    {
        printf("Your Exam is At 1 PM \n"); // Display exam time for standard 1
    }
    else if (Standard == 2) // If the user enters 2
    {
        printf("Your Exam is At 2 PM \n"); // Display exam time for standard 2
    }
    else if (Standard == 3) // If the user enters 3
    {
        printf("Your Exam is At 3 PM \n"); // Display exam time for standard 3
    }
    else if (Standard == 4) // If the user enters 4
    {
        printf("Your Exam is At 4 PM \n"); // Display exam time for standard 4
    }
    else if (Standard == 5) // If the user enters 5
    {
        printf("Your Exam is At 5 PM \n"); // Display exam time for standard 5
    }
    else // If the user enters any value other than 1 to 5
    {
        printf("Invalid Standard \n"); // Display an error message
    }

    return 0; // Return 0 to indicate successful execution
}
