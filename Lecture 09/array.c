#include<stdio.h>  // Standard input-output library

int main()
{
    // Declaring and initializing a character array (5 elements)
    char cArr[5] = {'A', 'B', 'C', 'D', 'E'};

    // Declaring and initializing an integer array (4 elements)
    int iArr[4] = {1, 2, 3, 4};

    // Declaring and initializing a float array (4 elements)
    float fArr[4] = {21.32, 56.32, 89.23, 78.63};

    // Declaring and initializing a double array (4 elements)
    double dArr[4] = {11.0, 21.5, 63.0, 89.0};

    // Printing the 4th element (index 3) from the character array
    printf("The Array Value of 03 From Char: %c\n", cArr[3]);

    // Printing the 3rd element (index 2) from the integer array
    printf("The Array Value of 03 From int: %d\n", iArr[2]);

    // Printing the 4th element (index 3) from the float array
    printf("The Array Value of 03 From float: %f\n", fArr[3]);

    // Printing the 3rd element (index 2) from the double array
    printf("The Array Value of 03 From double : %f\n", dArr[2]);

    return 0;  // Indicating successful execution
}
