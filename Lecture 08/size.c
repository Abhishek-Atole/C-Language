//A program to find the size of variable of various data types
#include<stdio.h>
int main()
{
    printf("Integer takes %d bytes in the memory\n",sizeof(int));
    printf("Float takes %d bytes in memory \n",sizeof(float));
    printf("Long takes %d bytes in memory \n",sizeof(long));
    printf("short takes %d bytes in memory\n",sizeof(short));
    printf("Double takes %d bytes in memory \n",sizeof(double));
    printf("signed takes %d bytes in memory\n",sizeof(signed));
    printf("unsigned takes %d bytes in memory\n",sizeof(unsigned));
    return 0;
}
