// Selection03.c
// This program takes a student's standard (grade level) as input and prints their exam time

#include <stdio.h>

int main() 
{
    int Standard = 0;

    printf("Primary School Portal \n");
    printf("Enter Your Division : ");
    scanf("%d", &Standard);

    switch(Standard)
    {
        case 1:printf("Your Exam is At 1 PM \n"); break;
        case 2:printf("Your Exam is At 2 PM \n"); break;
        case 3:printf("Your Exam is At 3 PM \n"); break;
        case 4:printf("Your Exam is At 4 PM \n"); break;
        case 5:printf("Your Exam is At 5 PM \n"); break;
        default:printf("Invalid Standard Division \n"); break;
    }
    return 0;
}
