//Post-Decrement Program

#include<stdio.h>

int main()
{
    int No = 0;   // Initialize No to 0
    int i = 20;   // Initialize i to 20
    
    No = i++;     // Assign i (20) to No, then increment i by 1

    printf("The Incremented Value is: %d\n", No);  // Prints 20 (old value of i)
    printf("The Incremented Value is: %d", i);    // Prints 21 (incremented value of i)
    
    return 0;
}
