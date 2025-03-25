#include <stdio.h>
void Fun() // Void means we are not return anything
{
    auto int i = 10;
    i++;                                // it is only increment because there is no variable written here
    printf("Value of i is :%d\n", i);
}

void Fun2() // Void means we are not return anything
{
    static int i = 10;
    i++;                                // it is only increment because there is no variable written here
    printf("Value of i is :%d\n", i);
}

int main()
{
    int no = 51;
    printf("How Function Works without Static\n");
    Fun();
    Fun();
    Fun();
    printf("How Local Static Variables Works\n");
    Fun2();
    Fun2();
    Fun2();
    
    return 0;
}