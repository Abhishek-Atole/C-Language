#include <stdio.h>
struct Demo
{

    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1, obj2, obj3;
    obj1.no = 11;
    obj2.no = 21;
    obj3.no = 91;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;

    printf(" The value of : %d %d \n", obj1.no, sizeof(obj1.no));
    printf(" The value of : %d %d\n", obj2.no, sizeof(obj2.no));
    printf(" The value of : %d %d\n", obj3.no, sizeof(obj3.no));
   
    printf(" The value of : %d %d\n", obj1.ptr,sizeof(obj1.ptr));
    printf(" The value of : %d %d\n", obj2.ptr,sizeof(obj2.ptr));
    printf(" The value of : %d %d\n", obj3.ptr,sizeof(obj3.ptr));
    return 0;
}