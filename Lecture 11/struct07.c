#include<stdio.h>
struct Demo
{
    int i;
    float f;
    struct Helllo
    {
        int a;
        float b;
    }hobj;
    
}dobj;                  // here the size of the dobj is of 16 bytes because the sturct is inside the stuct 

int main()
{
    struct Demo dobj;
    
    printf("size of the objects is  : %d\n",sizeof(dobj));

    return 0;
    
}