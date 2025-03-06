#include<stdio.h>
int main()
{
    int a=10;
    int b=10;
    int c=10;
    int d=10;

    a++;   //increment (this is only increment not pre increment not post increment)
    ++b;   //increment (this is only increment not pre increment not post increment)

    c--;    //decrement (this is only decrement not pre decrement not post decrement)
    --d;    //decrement (this is only decrement not pre decrement not post decrement)

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}