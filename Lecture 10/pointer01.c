#include<stdio.h>
int main()
{
    char ch='A';
    int i=21;
    float f=31.90f;
    double d=90.7865;

    char *cp =&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    printf("char Value :%c\n",ch);
    printf("Char value address : %d\n",&ch);
    printf("Size of the char Value : %d\n",sizeof(ch));
    printf("Char add :%d\n",*cp);    
    printf("Print the Address stored in Pointer : %d",sizeof(cp));
    return 0;


}