#include <stdio.h>

int main()
{
    printf("Bytes Occupied by '7' = %d\n", sizeof('7'));
    printf("Bytes Occupied by 1.56 = %u\n", sizeof(1.56));
    printf("Bytes Occupied by 50.26f = %u\n", sizeof(50.26f));
    printf("Bytes Occupied by 'A' = %d\n", sizeof('A'));
    return 0;
}
