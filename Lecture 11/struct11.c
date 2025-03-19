#include<stdio.h.>
struct Demo 
{
    int i;
    char ch; 
    float f;
    int d;

};

int main()
{
    struct Demo obj;
    printf("Size of the Object is : %lu\n",sizeof(obj));
    return 0;
}