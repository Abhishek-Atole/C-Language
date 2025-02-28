#include<stdio.h>   //This is Header file for the input and output 
void Display()          // (Void)  user defined function
{
    printf("This is Display Function \n ");   // User Defined Function data to print
}
int main()          // main function from where the execution starts
{
    printf("This is main Function \n");         // main function print function
    Display();                                  // calling the Display Function Here
    return 0;                                   // here the 0 value is return to the os which indicates the sucessful excution ans termination of process
}