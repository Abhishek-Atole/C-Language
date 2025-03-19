#pragma pack (1)
#include<stdio.h.>
struct Demo 
{
    int i;
    char ch; 
    float f;
    double d;

};

int main()
{
    struct Demo obj;
    printf("Size of the Object is : %lu\n",sizeof(obj));
    return 0;
}