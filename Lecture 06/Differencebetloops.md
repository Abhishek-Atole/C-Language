# Loop Differences: `for`, `while`, and `do-while`

The key differences between `for`, `while`, and `do-while` loops lie in their syntax, usage, and how they execute their conditions.

## 1. **For Loop**
- **Use Case:** When you know exactly how many times the loop should run.
- **Syntax:**
  ```cpp
  for(initialization; condition; update) {
      // Code block
  }
  ```
- **How it works:**
  - Initialization happens once before the loop starts.
  - The condition is checked before every iteration.
  - If the condition is `true`, the loop executes.
  - The update statement runs after each iteration.

**Example:**
```cpp
for(int i = 0; i < 5; i++) {
    cout << i << " ";
}
```
```java
for(int i = 0; i < 5; i++) {
    System.out.print(i + " ");
}
```
```python
for i in range(5):
    print(i, end=" ")
```
**Output:** `0 1 2 3 4`

---

## 2. **While Loop**
- **Use Case:** When the number of iterations is unknown and depends on a condition.
- **Syntax:**
  ```cpp
  while(condition) {
      // Code block
  }
  ```
- **How it works:**
  - The condition is checked first.
  - If `true`, the loop executes.
  - If `false`, the loop stops.

**Example:**
```cpp
int i = 0;
while(i < 5) {
    cout << i << " ";
    i++;
}
```
```java
int i = 0;
while(i < 5) {
    System.out.print(i + " ");
    i++;
}
```
```python
i = 0
while i < 5:
    print(i, end=" ")
    i += 1
```
**Output:** `0 1 2 3 4`

---

## 3. **Do-While Loop**
- **Use Case:** When you need the loop to execute **at least once**, regardless of the condition.
- **Syntax:**
  ```cpp
  do {
      // Code block
  } while(condition);
  ```
- **How it works:**
  - The code inside the loop **executes first**.
  - After execution, the condition is checked.
  - If `true`, it repeats; if `false`, it stops.

**Example:**
```cpp
int i = 0;
do {
    cout << i << " ";
    i++;
} while(i < 5);
```
```java
int i = 0;
do {
    System.out.print(i + " ");
    i++;
} while(i < 5);
```
```python
i = 0
while True:
    print(i, end=" ")
    i += 1
    if not (i < 5): break  # Simulating a do-while loop in Python
```
**Output:** `0 1 2 3 4`

---

## **Key Differences at a Glance**

| Feature       | `for` loop | `while` loop | `do-while` loop |
|--------------|-----------|-------------|----------------|
| Condition Check | Before execution | Before execution | After execution |
| Guaranteed Execution | No, if condition is false initially | No, if condition is false initially | Yes, runs at least once |
| Best For | Known iterations | Unknown iterations | At least one iteration required |

Let me know if you need further clarification! 🚀
