#include<stdio.h>
int main()
{
    signed a= 10;
    signed b=-22;
    signed c=0;
    unsigned int d=40;
    int x=10;
    short int y=10;
    long int z=30;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);

    printf("Size of x = %d\n",sizeof(x));
    printf("Size of y = %d\n",sizeof(y));
    printf("Size of z = %d\n",sizeof(z));
    
    return 0;
}