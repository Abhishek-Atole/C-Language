//A program to swap two numbers without using a third number
#include<stdio.h>
int main()
{
    int a,b=0;
    printf("Enter the value ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swap : %d %d \n",a,b);
    b=a+b;
    printf("Numbers After b : %d\n",b);
    a=b-a;
    printf("Numbers After a : %d\n",a);
    b=b-a;
    printf("Numbers After b : %d\n",b);
    printf("Numbers After swap %d %d \n",a,b);
    return 0;
}