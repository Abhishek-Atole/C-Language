#include <stdio.h>  // Include standard input-output library

int main()
{
    int i = 0;        // Variable for loop iteration
    int count = 0;    // Variable to store the upper limit
    int initial = 0;    // Variable to store the starting initial

    // Prompt the user to enter the starting limit
    printf("Enter the limit number:\n");
    scanf("%d", &initial);

    // Prompt the user to enter the upper limit
    printf("Enter the count number:\n");
    scanf("%d", &count);

    // Loop from 'initial' to 'count' (inclusive)
    for (i = initial; i<=count; i++)
    {
        printf("Jay Ganesh %d\n", i);  // Print the message with the current value of i
    }

    return 0;  // Return success
}
