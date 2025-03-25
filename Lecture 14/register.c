//This Code Can Reduce the Time of execution in bigger applications
#include<stdio.h>
void Display()
{
    register int i=21;
    register int j;
    auto int no=11;

    printf("The value of the I is : %d\n",i);
    printf("The value of int j :%d\n",j);
    printf("The value of int no :%d\n",no);
}

int main()
{
    Display();
    //printf("%d\n",no);
    return 0;
}