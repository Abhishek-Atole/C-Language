# The `do-while` Loop

The `do-while` loop is a control flow statement that executes a block of code at least once and then repeatedly executes it as long as a specified condition remains `true`.

## **Syntax**
```cpp
do {
    // Code block
} while(condition);
```

## **How It Works**
- The loop body executes **at least once** before the condition is checked.
- If the condition is `true`, the loop repeats.
- If the condition is `false`, the loop terminates after the first iteration.

## **Example Implementations**

### **C++ Example:**
```cpp
int i = 0;
do {
    cout << i << " ";
    i++;
} while(i < 5);
```
**Output:** `0 1 2 3 4`

### **Java Example:**
```java
int i = 0;
do {
    System.out.print(i + " ");
    i++;
} while(i < 5);
```
**Output:** `0 1 2 3 4`

### **Python Equivalent:**
Python does not have a built-in `do-while` loop, but we can simulate it using a `while` loop:
```python
i = 0
while True:
    print(i, end=" ")
    i += 1
    if not (i < 5):
        break
```
**Output:** `0 1 2 3 4`

## **Code Execution Steps**
The following C program demonstrates the execution flow of a `do-while` loop:

```c
#include<stdio.h>
int main()
{
    int i=3;                        // Step 1: Initialize i to 3
    do
    {
        printf("Jay Ganesh\n");     // Step 4: Print statement executes
        i++;                        // Step 3: Increment i
    }
    while (i<=5);                   // Step 2: Condition is checked after execution

    return 0;
}
```
### **Execution Steps:**
1. **Step 1:** `i` is initialized to `3`.
2. **Step 4:** "Jay Ganesh" is printed.
3. **Step 3:** `i` is incremented.
4. **Step 2:** Condition (`i <= 5`) is checked.
   - If `true`, loop repeats from Step 4.
   - If `false`, loop terminates.

## **Use Cases of `do-while` Loop**
1. **When the code must run at least once** (e.g., menu-driven programs).
2. **Input validation loops** (e.g., prompting users until they enter valid data).
3. **Game loops** (e.g., running an iteration before checking exit conditions).

The `do-while` loop ensures that the loop body executes at least once, which makes it different from the `while` loop.

Let me know if you need more details! 🚀
