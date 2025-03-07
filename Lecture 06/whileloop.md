# The `while` Loop

The `while` loop is a control flow statement that allows code to be executed repeatedly based on a given condition.

## **Syntax**
```c
while (condition) {
    // Code block to execute
}
```
- The condition is checked **before** the execution of the loop body.
- If the condition is `true`, the loop runs.
- If the condition is `false`, the loop terminates.

## **Example Program**
The following C program demonstrates a `while` loop where the user specifies the number of times "Jay Ganesh" should be printed:

```c
#include <stdio.h>  // Include standard input-output library

int main()
{
    int i = 1;       // Step 1: Initialize loop counter
    int count = 0;   // Step 2: Variable to store user input
    
    printf("Enter the number of times you want to print Jay Ganesh\n");
    scanf("%d", &count);  // Step 3: Read user input

    while (i <= count)  // Step 4: Check loop condition
    {
        printf("%d Jay Ganesh \n", i);  // Step 5: Print message with loop counter
        i++;  // Step 6: Increment counter
    }

    return 0;  // Step 7: End of program
}
```

## **Execution Steps**
1. **Step 1:** Initialize `i = 1` and `count = 0`.
2. **Step 2:** Prompt user for input.
3. **Step 3:** Store user input in `count`.
4. **Step 4:** Check if `i <= count`.
   - If `true`, proceed to Step 5.
   - If `false`, exit loop.
5. **Step 5:** Print `i` and "Jay Ganesh".
6. **Step 6:** Increment `i`.
7. **Step 7:** Repeat Step 4 until condition fails.

## **Example Input and Output**
**Input:**
```
Enter the number of times you want to print Jay Ganesh
3
```

**Output:**
```
1 Jay Ganesh
2 Jay Ganesh
3 Jay Ganesh
```

### **Key Points**
- The `while` loop checks the condition before executing the loop body.
- If the condition is never `true`, the loop will not execute at all.
- It is commonly used when the number of iterations is **not** known beforehand.

Let me know if you need any modifications! 🚀

