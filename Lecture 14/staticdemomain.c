#include <stdio.h>
void Fun() // Void means we are not return anything
{
    static int i = 10;
    i++;                                // it is only increment because there is no variable written here
    printf("Value of i is :%d\n", i);
}

int main()
{
    int no = 51;
    Fun();
    Fun();
    Fun();
    return 0;
}