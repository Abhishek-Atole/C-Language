#include<stdio.h>

int main() {
    printf("Integer takes %zu bytes in memory\n", sizeof(int));
    printf("Float takes %zu bytes in memory\n", sizeof(float));
    printf("Long takes %zu bytes in memory\n", sizeof(long));
    printf("Short takes %zu bytes in memory\n", sizeof(short));
    printf("Double takes %zu bytes in memory\n", sizeof(double));
    printf("Signed int takes %zu bytes in memory\n", sizeof(signed int));
    printf("Unsigned int takes %zu bytes in memory\n", sizeof(unsigned int));
    printf("Char takes %zu bytes in memory\n", sizeof(char));
    printf("Signed char takes %zu bytes in memory\n", sizeof(signed char));
    printf("Unsigned char takes %zu bytes in memory\n", sizeof(unsigned char));
    return 0;
}
