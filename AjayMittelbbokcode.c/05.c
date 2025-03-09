//A proegram to swap two numbers using third variable
#include<stdio.h>
int main()
{
    int number1,number2,number3=0;
    printf("enter Numbers \t");
    scanf("%d %d",&number1,&number2);
    printf("Numbers Before Swap %d %d %d\n",number1,number2,number3);
    number3=number2;
    number2=number1;
    number1=number3;
    printf("Number  after swap \n(Number 1 : %d \n Number 2 : %d )",number1,number2);
    return 0;
}