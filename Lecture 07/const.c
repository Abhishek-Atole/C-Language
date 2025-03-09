#include <stdio.h>

int main() {
    int y = 21;       // Normal variable
    y++;              // Allowed (Increment)
    y--;              // Allowed (Decrement)

    const int x = 11; // Constant variable (Cannot be modified)
    // x++;           // Not allowed (Error: modifying a const variable)
    // x--;           // Not allowed (Error: modifying a const variable)

    printf("Constant x: %d\n", x);
    printf("Variable y after modifications: %d\n", y);

    return 0;
}
