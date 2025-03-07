#include <stdio.h>  // Include standard input-output library

int main()
{
    int i = 1;       
    int count = 0;    
    
    printf("Enter the number of times you want to print the Jay ganesh \n");
    scanf("%d",&count);

    while (i<=count)
    {
        printf("%d Jay Ganesh \n", i);  // Print the message with the current value of i
        i++;
    }

    return 0;  // Return success
}