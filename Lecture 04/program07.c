#include<stdio.h>
int main()
{
    char cvalue = 'A';              // char value is of 1 Byte
    int ivalue = 101;               // integer value is of 4 Bytes 
    float fvalue = 29.39f;          // float value is of 4 Bytes 
                                    // (Here the f letter is written at the end of the value which leads to that float value and if not then this value is treated as the double)
    double dvalue = 30.298566;      // double value is of 8 Bytes

    printf("%c\n", cvalue);         // Prints 'A'
    printf("%d\n", ivalue);         // Prints 101
    printf("%f\n", fvalue);         // Prints 29.390000 (default float precision)
    printf("%.6f\n", dvalue);       // Prints 30.298566 with precision
    return 0;
}
