<button onclick="navigator.clipboard.writeText(document.getElementById('code-block').innerText);">Copy Code</button>

```c id="code-block"
#include <stdio.h>

// This program demonstrates the use of normal and constant variables in C.
int main() {
    // Declaring a normal integer variable 'y' and initializing it with 21.
    int y = 21;
    
    // Incrementing the value of 'y' by 1.
    y++;
    // Decrementing the value of 'y' by 1, so it returns to its original value.
    y--;

    // Declaring a constant integer 'x' and initializing it with 11.
    const int x = 11; // The value of 'x' cannot be changed after initialization.
    
    // The following operations on 'x' are not allowed and will cause a compilation error.
    // x++;  // Error: Attempting to modify a constant variable.
    // x--;  // Error: Attempting to modify a constant variable.

    // Printing the values of 'x' and 'y' to the console.
    printf("Constant x: %d\n", x);
    printf("Variable y after modifications: %d\n", y);

    return 0;
}
```

## Key Points

### Normal Variable (`int y = 21;`)
- `y` is a **regular variable**.
- `y++` increases its value by `1`.
- `y--` decreases its value by `1`.

### Constant Variable (`const int x = 11;`)
- `x` is declared as a `const`, meaning **its value cannot be changed**.
- Trying `x++` or `x--` will cause a **compilation error**.

## Expected Output
```yaml
Constant x: 11
Variable y after modifications: 21
```
Since `y++` and `y--` cancel each other out, `y` remains `21`.

✅ **Your code is well-structured and logically correct!**

