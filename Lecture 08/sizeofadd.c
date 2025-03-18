#include<stdio.h>
int main()
{
    char ch='A';
    float f=12.35f;
    int i=25505568;
    double d=89.90;

    printf("Size of Character is : %d bytes \n",sizeof(ch));
    printf("Size of Integer is : %d Bytes \n",sizeof(i));
    printf("size of float is : %d Bytes \n",sizeof(f));
    printf("size of double is : %d Bytes \n", sizeof(d));

    printf("Base Address of chharacter is : %u\n",&ch);
    printf("Base Adrress of Integer is : %u\n",&i);
    printf("Base Address of float is : %u\n",&f);
    printf("Base Address of double is : %u\n",&d);

    return 0;
}