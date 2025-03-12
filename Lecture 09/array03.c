#include <stdio.h>

int main()
{
    // Declaring and initializing an integer array with 5 elements
    int Arr[5] = {1, 2, 3, 4, 5};

    // Printing the base address of the first element of the array
    printf("Base Address of the First Element of the Array is : %d\n", &(Arr[0]));

    // Printing the value of the first element of the array
    printf("The Value of the First Element of the Array is : %d\n", Arr[0]);

    // Printing the base address of the second element of the array
    printf("Base Address of the 2nd Element of the Array is : %d\n", &(Arr[1]));

    // Printing the value of the second element of the array
    printf("The Value of the 2nd Element of the Array is : %d\n", Arr[1]);

    /* Printing the base address of the entire array
       Since the name of an array itself acts as a pointer to the first element,
       this will print the address from where the array starts */
    printf("Base Address of the whole Array is : %d\n", Arr);

    /* Calculating and printing the total size of the array in bytes
       Since an integer typically occupies 4 bytes, the total size of the array (5 elements) is 5 * 4 = 20 bytes */
    printf("Size of the Whole Array is : %d\n", sizeof(Arr));

    return 0;
}
