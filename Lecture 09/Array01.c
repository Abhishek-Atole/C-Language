#include<stdio.h>  // Including standard input-output library

int main()  
{
    // Declaring and initializing six integer variables
    int no1 = 21;
    int no2 = 22;
    int no3 = 23;
    int no4 = 24;
    int no5 = 25;
    int no6 = 26;

    // Declaring and initializing an integer array with 8 elements
    int arr[8] = {21, 22, 23, 24, 25, 26, 27, 28};

    // Printing the value of the variable no3
    printf("The Value of no 3 : %d\n", no3);

    // Printing the value of the 4th element in the array (index 3)
    printf("The Value of Array value of 03 : %d\n", arr[3]);

    // Calculating and printing the total size of the array in bytes
    printf("Size of the Array is : %d\n", sizeof(arr));

    return 0;  // Returning 0 to indicate successful program execution
}
