#include <stdio.h>

int main() 
{
    // Declaring an array with explicit size and initialization
    int Arr[5] = {10, 20, 30, 40, 50}; 
    // Elements: Arr[0]=10, Arr[1]=20, Arr[2]=30, Arr[3]=40, Arr[4]=50

    // Declaring an array without specifying the size (size inferred automatically)
    int Brr[] = {10, 20, 30, 40, 5};  
    // The size is automatically set to 5 because there are 5 elements in the initializer list

    // Declaring an array of size 7 but initializing only the first 3 elements
    int Crr[7] = {10, 20, 30};  
    // Crr[3] to Crr[6] will be initialized to 0 by default

    // Declaring an array without initialization and assigning values individually
    int Drr[3];  
    Drr[0] = 10;  // Assigning value at index 0
    Drr[1] = 20;  // Assigning value at index 1
    Drr[2] = 30;  // Assigning value at index 2
    // Drr[3] = 40;  // ❌ ERROR: Out of bounds! (Index exceeds array size)

    // Declaring another array with a different name to avoid redeclaration error
    int Arr2[4] = {10, 20, 25, 30};  

    // Declaring a constant array (values cannot be changed after initialization)
    const int BrrConst[4] = {10, 20, 30, 40};

    // Modifying values of a normal (non-constant) array
    Arr[1] = 21;  // ✅ Allowed: Changing Arr[1] from 20 to 21
    // BrrConst[1] = 21;  // ❌ ERROR: Cannot modify a constant array

    // Incrementing elements of arrays
    Arr[2]++;  // ✅ Allowed: Arr[2] (30) becomes 31
    // BrrConst[2]++;  // ❌ ERROR: Cannot increment a constant array element

    // Printing the arrays to verify values
    printf("Arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");

    printf("Brr: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", Brr[i]);
    }
    printf("\n");

    printf("Crr: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", Crr[i]);  // Will print some default zeros for uninitialized values
    }
    printf("\n");

    printf("Drr: ");
    for (int i = 0; i < 3; i++) {  // Fixed loop condition
        printf("%d ", Drr[i]);  
    }
    printf("\n");

    printf("Arr2: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", Arr2[i]);
    }
    printf("\n");

    printf("BrrConst: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", BrrConst[i]);  // Only displaying, cannot modify
    }
    printf("\n");

    return 0;
}
