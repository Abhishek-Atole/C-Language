//Pre- Decrement Program
#include <stdio.h>

int main() 
{
    int No = 0;   // Initialize No to 0
    int i = 20;   // Initialize i to 20
    
    No = ++i;     // Pre-increment: First increment i, then assign it to No

    printf("The Incremented Value is: %d\n", No);  // Prints 21 (new value of i)
    printf("The Incremented Value is: %d", i);    // Prints 21 (same as No)
    
    return 0;
}
