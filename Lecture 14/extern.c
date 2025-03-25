#include <stdio.h>
int i;              // Non Initialised value (Stores in BSS Section)
int j = 11;         // Initialised Value (stores in Non BSS Section)
extern int no;      // this is used to combine the multiple files to get the output 
                    // extern storage class is used to take the data form external files
int main()
{
    printf("The Value of i = %d\n", i);
    printf("The Value of j = %d\n", j);
    printf("The Value of no = %d\n", no);
    return 0;
}