#include <stdio.h>

int main()
{
    char ch = 'A';
    float f = 12.35f;
    int i = 25505568;
    double d = 89.90;

    printf("Size of Character is : %lu bytes \n", sizeof(ch));
    printf("Size of Integer is : %lu Bytes \n", sizeof(i));
    printf("Size of float is : %lu Bytes \n", sizeof(f));
    printf("Size of double is : %lu Bytes \n", sizeof(d));

    printf("Base Address of character is : %p\n", (void *)&ch);
    printf("Base Address of Integer is : %p\n", (void *)&i);
    printf("Base Address of float is : %p\n", (void *)&f);
    printf("Base Address of double is : %p\n", (void *)&d);

    return 0;
}
