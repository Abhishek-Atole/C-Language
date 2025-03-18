#include<stdio.h>
struct Demo
{
    int i;
    int Arr[3];
    float f;    
};
int main()
{
    struct Demo obj;

    obj.i=45;

    obj.Arr[0]=20;
    obj.Arr[1]=30;
    obj.Arr[2]=40;

    obj.f=35.35;

     return 0;
}