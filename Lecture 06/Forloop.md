# C Program: Loop Execution with User Input

## **Overview**

This C program takes two user inputs: a **starting limit** and an **upper limit**. It then prints "Jay Ganesh" followed by numbers in a loop from the starting limit to the upper limit.

---

## **Code**

```c
#include <stdio.h>  // Include standard input-output library

int main()
{
    int i = 0;        // Variable for loop iteration
    int count = 0;    // Variable to store the upper limit
    int limit = 0;    // Variable to store the starting limit

    // Prompt the user to enter the starting limit
    printf("Enter the limit number:\n");
    scanf("%d", &limit);

    // Prompt the user to enter the upper limit
    printf("Enter the count number:\n");
    scanf("%d", &count);

    // Loop from 'limit' to 'count' (inclusive)
    for (i = limit; i <= count; i++)
    {
        printf("Jay Ganesh %d\n", i);  // Print the message with the current value of i
    }

    return 0;  // Return success
}
```

---

## **Code Explanation**

### **1. Include Header File**

```c
#include <stdio.h>
```

- The `stdio.h` library is included to use `printf()` and `scanf()` functions for input and output operations.

### **2. Define the ****`main()`**** Function**

```c
int main()
```

- The `main()` function is the entry point of the program.
- It returns an integer (`int`), typically `0` for successful execution.

### **3. Variable Declarations**

```c
int i = 0;        // Variable for loop iteration
int count = 0;    // Variable to store the upper limit
int limit = 0;    // Variable to store the starting limit
```

- `i`: Used as a loop counter.
- `count`: Stores the **upper limit** (entered by the user).
- `limit`: Stores the **starting number** (entered by the user).

### **4. Taking User Input**

```c
printf("Enter the limit number:\n");
scanf("%d", &limit);

printf("Enter the count number:\n");
scanf("%d", &count);
```

- `printf()` prints a message asking for input.
- `scanf("%d", &limit);` stores user input in `limit`.
- `scanf("%d", &count);` stores user input in `count`.

### **5. Loop Execution**

```c
for (i = limit; i <= count; i++)
{
    printf("Jay Ganesh %d\n", i);
}
```

#### **Loop Details:**

| Part of Loop | Description                                                    |
| ------------ | -------------------------------------------------------------- |
| `i = limit`  | Initializes `i` to the starting value (user input).            |
| `i <= count` | Runs the loop as long as `i` is less than or equal to `count`. |
| `i++`        | Increments `i` after each iteration.                           |

#### **Example Execution:**

##### **User Inputs:**

```
Enter the limit number:
3
Enter the count number:
6
```

##### **Loop Execution:**

| Iteration | Value of `i` | Condition `i <= count` | Output         |
| --------- | ------------ | ---------------------- | -------------- |
| 1         | 3            | `3 <= 6` → ✅           | `Jay Ganesh 3` |
| 2         | 4            | `4 <= 6` → ✅           | `Jay Ganesh 4` |
| 3         | 5            | `5 <= 6` → ✅           | `Jay Ganesh 5` |
| 4         | 6            | `6 <= 6` → ✅           | `Jay Ganesh 6` |
| 5         | 7            | `7 <= 6` → ❌           | (Loop stops)   |

##### **Final Output:**

```
Jay Ganesh 3
Jay Ganesh 4
Jay Ganesh 5
Jay Ganesh 6
```

### **6. Program Termination**

```c
return 0;
```

- Indicates **successful execution** of the program.

---

## **Key Takeaways**

✅ The program takes two user inputs: **starting limit** and **upper limit**.
✅ It loops from `limit` to `count`, printing "Jay Ganesh" along with numbers.
✅ The loop **stops** when `i > count`.
✅ Uses `printf()` for output and `scanf()` for input.
✅ Implemented using a simple `for` loop.

---

## **Possible Enhancements**

1. **Input Validation**: Ensure that the user enters valid numbers.
2. **Reverse Loop**: Modify to allow decrementing if `limit > count`.
3. **Dynamic Messages**: Let users input their own message instead of "Jay Ganesh".
4. **Error Handling**: Handle incorrect inputs like non-integer values.

---

## **License**

This project is licensed under the MIT License - feel free to modify and use it!

---

## **Author**

👨‍💻 **Your Name** 📧 Contact: [your-a](mailto\:your-email@example.com)bhiatole03\@gmail.com

Happy Coding! 🚀

