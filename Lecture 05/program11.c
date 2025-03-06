//Selection02.c

#include<stdio.h>
int main()
{
    int Standard =0;
    printf("Primary School Portal \n");
    printf("Enter Your Division : ");
    scanf("%d",&Standard);                  //Here & is required to because it describes the address of that operator

    // if else ladder 
    if (Standard==1)
    {
        printf("Your Exam is At 1 PM \n");
    }
    else if (Standard==2)
    {
        printf("Your Exam is At 2 PM \n");
    }
    else if (Standard==3)
    {
        printf("Your Exam is At 3 PM \n");
    }
    else if (Standard==4)
    {
        printf("Your Exam is At 4 PM \n");
    }
    else if (Standard==5)
    {
        printf("Your Exam is At 5 PM \n");
    }
    else
    {
        printf("Invalid Standard \n");
    }
    return 0;
}