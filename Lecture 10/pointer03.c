#include <stdio.h>

int main()
{
    int no = 21;
    int *p = &no;
    int *a = &no;
    int **q = &p;
    int **b = &p;
    int ***r = &q;
    int ***x = &r;
    int *****y = &x;

    // Printing values
    printf("Value of no       : %d\n", no);
    printf("Value at *p       : %d\n", *p);
    printf("Value at *a       : %d\n", *a);
    printf("Value at **q      : %d\n", **q);
    printf("Value at **b      : %d\n", **b);
    printf("Value at ***r     : %d\n", ***r);
    printf("Value at ***x     : %d\n", ***x);
    printf("Value at *****y   : %d\n", *****y);

    // Printing addresses
    printf("\nAddress of no     : %p\n", (void *)&no);
    printf("Address in p      : %p\n", (void *)p);
    printf("Address in a      : %p\n", (void *)a);
    printf("Address in q      : %p\n", (void *)q);
    printf("Address in b      : %p\n", (void *)b);
    printf("Address in r      : %p\n", (void *)r);
    printf("Address in x      : %p\n", (void *)x);
    printf("Address in y      : %p\n", (void *)y);

    // Printing sizes of pointers
    printf("\nSize of int       : %zu bytes\n", sizeof(int));
    printf("Size of int*      : %zu bytes\n", sizeof(int *));
    printf("Size of int**     : %zu bytes\n", sizeof(int **));
    printf("Size of int***    : %zu bytes\n", sizeof(int ***));
    printf("Size of int*****  : %zu bytes\n", sizeof(int *****));

    return 0;
}
