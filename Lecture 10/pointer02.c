#include<stdio.h>
int main()
{
    int no=11;
    int *p=&no;

    printf("The Value of No:%d\n",no);
    printf("The Address of the  value no:%d\n",&no);
    printf("The size of the value no:%d Bytes\n",sizeof(no));
    printf("The Value of the p:%d\n",p);
    printf("The Value of the Address of p:%d\n",&p);
    printf("The Pointer Value of the P:%d\n",*p);
    printf("The Size of the pointe Value:%d Bytes\n",sizeof(p));
    return 0;

}