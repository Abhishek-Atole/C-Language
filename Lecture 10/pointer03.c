#include <stdio.h>

int main()
{
    int no = 21;      // Integer variable declaration and initialization
    int *p = &no;     // Single pointer pointing to the address of 'no'
    int *a = &no;     // Another single pointer pointing to the address of 'no'
    int **q = &p;     // Double pointer pointing to the address of pointer 'p'
    int **b = &p;     // Another double pointer pointing to the address of pointer 'p'
    int ***r = &q;    // Triple pointer pointing to the address of pointer 'q'
    int ****x = &r;   // Quadruple pointer pointing to the address of pointer 'r'
    int *****y = &x;  // Quintuple pointer pointing to the address of pointer 'x'

    printf("Integer Value : %d\n", no);
    printf("Integer Value Address : %d\n", &no);                // Address of the 'no' Value
    printf("Size of the Integer Value : %d\n", sizeof(no));     // Size of the 'no' value

    printf("\nPointer p:%d\n",p) ;          
    printf("Stored Address in p : %d\n", &p);                   // Address of pointer 'p'
    printf("Value at *p : %d\n", *p);                           // Pointer value of *p - one step before the address of 'no'
    printf("Size of p : %d\n", sizeof(p));                      // Size of the 'p' pointer

    printf("\nPointer a:%d\n",a);         
    printf("Stored Address in a : %d\n", &a);                   // Address of pointer 'a'
    printf("Value at *a : %d\n", *a);                           // Pointer value of *a - one step before the address of 'no'
    printf("Size of a : %d\n", sizeof(a));                      // Size of the 'a' pointer

    printf("\nDouble Pointer q:%d\n",q);
    printf("Stored Address in q : %d\n", &q);                   // Address of pointer 'q'
    printf("Value at **q : %d\n", **q);                         // Double pointer dereferencing value - same as 'no'
    printf("Size of q : %d\n", sizeof(q));                      // Size of the double pointer 'q'

    printf("\nDouble Pointer b:%d\n",b);
    printf("Stored Address in b : %d\n", &b);                   // Address of pointer 'b'
    printf("Value at **b : %d\n", **b);                         // Double pointer dereferencing value - same as 'no'
    printf("Size of b : %d\n", sizeof(b));                      // Size of the double pointer 'b'

    printf("\nTriple Pointer r:%d\n",r);
    printf("Stored Address in r : %d\n", &r);                   // Address of pointer 'r'
    printf("Value at ***r : %d\n", ***r);                       // Triple pointer dereferencing value - same as 'no'
    printf("Size of r : %d\n", sizeof(r));                      // Size of the triple pointer 'r'

    printf("\nTriple Pointer x:%d\n",x);
    printf("Stored Address in x : %d\n", &x);                   // Address of pointer 'x'
    printf("Value at ***x : %d\n", ***x);                       // Incorrect comment: This should be ****x
    printf("Size of x : %d\n", sizeof(x));                      // Size of the quadruple pointer 'x'

    printf("\nQuintuple Pointer y:%d\n",y);
    printf("Stored Address in y : %d\n", &y);                   // Address of pointer 'y'
    printf("Value at *****y : %d\n", *****y);                   // Quintuple pointer dereferencing value - same as 'no'
    printf("Size of y : %d\n", sizeof(y));                      // Size of the quintuple pointer 'y'

    return 0;
}
