//Accept Number form the user and check whether that the number is odd or even
#include<stdio.h>
int main()
{
    int No=0;
    int Ans=0;

    printf("Enter Number :");
    scanf("%d",&No);

    Ans = No % 2;

    if(Ans == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd \n");
    }
    return 0;
}