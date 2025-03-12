**GitHub Markdown documentation** for **Arrays in C**, now including **2D, 3D, and 4D arrays** with explanations, real-life analogies, and code snippets! 🚀  

---

# 📌 **Arrays in C**  

## 📖 **What is an Array?**  
An **array** is a collection of elements of the **same data type** stored in contiguous memory locations. Instead of creating multiple variables for storing related data, we use an array to store them efficiently.  

---

## 🏠 **Real-Life Analogy**  

### 🔹 **1D Array (Single-Dimensional Array)** → **Bookshelf**  
A bookshelf with a **single row** of compartments, where each compartment holds a book.  

### 🔹 **2D Array (Two-Dimensional Array)** → **Chessboard**  
A **chessboard** has rows and columns, just like a **matrix** in a 2D array.  

### 🔹 **3D Array (Three-Dimensional Array)** → **Apartment Building**  
An apartment building has **floors (1st dimension)**, **rows of flats (2nd dimension)**, and **rooms inside each flat (3rd dimension)**.  

### 🔹 **4D Array (Four-Dimensional Array)** → **Library Sections**  
A library has **multiple buildings (1st dimension)**, each building has **several floors (2nd dimension)**, each floor has **rows of bookshelves (3rd dimension)**, and each bookshelf has **books (4th dimension).**  

---

## 📌 **Declaring and Initializing Arrays**  

### ✅ **1D Array (Single-Dimensional Array)**  
```c
int numbers[5] = {10, 20, 30, 40, 50};  
```

---

## 📌 **2D Arrays (Two-Dimensional Arrays - Matrices)**  
A **2D array** is like a **table or matrix** with rows and columns.  

### **Syntax:**  
```c
data_type array_name[rows][columns];
```

### **Example:**  
```c
int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
```

### **Accessing 2D Array Elements:**  
```c
printf("%d", matrix[1][2]);  // Outputs 6 (2nd row, 3rd column)
```

### **Traversing a 2D Array:**  
```c
#include <stdio.h>

int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
<button onclick="copyCode()">Copy Code</button>  

---

## 📌 **3D Arrays (Three-Dimensional Arrays - Cube Structure)**  
A **3D array** represents data in **multiple layers (depth)**.  

### **Syntax:**  
```c
data_type array_name[depth][rows][columns];
```

### **Example (3D Array with 2 Layers, 2 Rows, and 3 Columns):**  
```c
int cube[2][2][3] = {
    { {1, 2, 3}, {4, 5, 6} },
    { {7, 8, 9}, {10, 11, 12} }
};
```

### **Accessing a 3D Array Element:**  
```c
printf("%d", cube[1][0][2]);  // Outputs 9 (2nd layer, 1st row, 3rd column)
```

### **Traversing a 3D Array:**  
```c
#include <stdio.h>

int main() {
    int cube[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 3; k++) {
                printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
            }
        }
    }

    return 0;
}
```
<button onclick="copyCode()">Copy Code</button>  

---

## 📌 **4D Arrays (Four-Dimensional Arrays - Hypercube Structure)**  
A **4D array** represents data in **four dimensions**: **sections, depth, rows, and columns**.  

### **Syntax:**  
```c
data_type array_name[sections][depth][rows][columns];
```

### **Example (4D Array with 2 Sections, 2 Layers, 2 Rows, and 2 Columns):**  
```c
int hypercube[2][2][2][2] = {
    {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    },
    {
        { {9, 10}, {11, 12} },
        { {13, 14}, {15, 16} }
    }
};
```

### **Accessing a 4D Array Element:**  
```c
printf("%d", hypercube[1][0][1][0]);  // Outputs 11
```

### **Traversing a 4D Array:**  
```c
#include <stdio.h>

int main() {
    int hypercube[2][2][2][2] = {
        {
            { {1, 2}, {3, 4} },
            { {5, 6}, {7, 8} }
        },
        {
            { {9, 10}, {11, 12} },
            { {13, 14}, {15, 16} }
        }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++) {
                    printf("hypercube[%d][%d][%d][%d] = %d\n", i, j, k, l, hypercube[i][j][k][l]);
                }
            }
        }
    }

    return 0;
}
```
<button onclick="copyCode()">Copy Code</button>  

---

## 📌 **Advantages of Multi-Dimensional Arrays**  
✅ Useful for storing complex data like matrices, tables, and grids  
✅ Supports real-world data representations like 3D objects and game environments  

## 📌 **Disadvantages of Multi-Dimensional Arrays**  
❌ More memory consumption  
❌ Increased complexity in accessing and managing data  

---

### 📌 **GitHub Repository**  
📂 **Repo Name**: `your-repo-name`  
🔗 **GitHub Link**: [GitHub Repository](https://github.com/your-username/your-repo-name)  

---

This documentation now includes **1D, 2D, 3D, and 4D arrays** with real-world examples, explanations, and code snippets with **copy buttons**! 🚀  

**GitHub Repository** details:  

- **Repo Name**: `C-Language`  
- **Owner**: [Abhishek Atole](https://github.com/Abhishek-Atole)  
- **GitHub Link**: [C-Language Repository](https://github.com/Abhishek-Atole/C-Language.git)  
