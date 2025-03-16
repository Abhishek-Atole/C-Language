#include<stdio.h>

struct Demo
{
    int a;
    float b;
    int c;
    float d;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.a=11;
    obj1.b=10.5;
    obj1.c=21;
    obj1.d=20.5;

    obj2.a=51;
    obj2.b=50.5;
    obj2.c=101;
    obj2.d=60.5;

    printf("The Structure derived value is %d\n",sizeof(obj1));

    return 0;

}