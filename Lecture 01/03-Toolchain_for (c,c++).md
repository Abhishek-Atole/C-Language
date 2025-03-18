# **🛠️ Toolchain for C and C++**  

## **📌 What is a Toolchain?**  
A **toolchain** is a set of programs used to **build, compile, and debug** a program.  

### **🏧️ Real-Life Analogy: A Car Factory 🚗**  
Building a **C/C++ program** is like assembling a **car** in a factory.  
1. **Preprocessor** → Plans and prepares raw materials 🔧  
2. **Compiler** → Assembles car parts 🔨  
3. **Assembler** → Converts into a working machine ⚙️  
4. **Linker** → Combines all parts into a final car 🚗  
5. **Debugger** → Quality checks for issues 🛠️  

---

# **🔄 Build Process of a C Program**  

## **✅ Stages of Compilation**  
A C program goes through **4 major steps** before it becomes an **executable file**.  

| Step | Stage | Description |
|------|------------|-------------|
| 1️⃣ | **Preprocessing (`cpp`)** | Handles `#include`, `#define`, and macros |
| 2️⃣ | **Compilation (`gcc`)** | Converts C code into Assembly |
| 3️⃣ | **Assembly (`as`)** | Translates Assembly into Machine Code |
| 4️⃣ | **Linking (`ld`)** | Combines object files into an executable |

---
## 🛠️ Toolchain Image  

Click on the image to view in full size:  

[![Toolchain Process](./images/c,c++%20Toolchain.jpg)](./images/c,c++%20Toolchain.jpg)
 
----

# **🛠️ Components of the Toolchain**  

### **1️⃣ Preprocessor (`cpp`)**  
- Handles **`#include`, `#define`, `#if` macros**.  
- Removes **comments** and expands **macros**.  

### **🔥 Example: Preprocessor in Action**  
```c
#include <stdio.h>
#define PI 3.1415

int main() {
    printf("Value of PI: %f\n", PI);
    return 0;
}
```
🔹 Run Preprocessor Only:  
```bash
gcc -E program.c -o program.i
```
🔹 Output: **`program.i`** file (expanded code).

---

### **2️⃣ Compiler (`gcc`, `g++`)**  
- Converts C/C++ code into **Assembly language**.  

### **🔥 Example: Compiling Only**  
```bash
gcc -S program.i -o program.s
```
🔹 Output: **`program.s`** (Assembly Code).

---

### **3️⃣ Assembler (`as`)**  
- Converts **Assembly code** into **Machine Code** (binary).  

### **🔥 Example: Assembly Step**  
```bash
gcc -c program.s -o program.o
```
🔹 Output: **`program.o`** (Object File).

---

### **4️⃣ Linker (`ld`)**  
- Combines all **object files** into a **final executable**.  
- Resolves **function calls** (like `printf`).  

### **🔥 Example: Linking Step**  
```bash
gcc program.o -o program
```
🔹 Output: **`program`** (Executable File).

---

# **🛠️ Using GCC Toolchain**  

## ✅ **Compiling a C Program in One Command**  
```bash
gcc program.c -o program
./program
```

## ✅ **Compiling a C++ Program**  
```bash
g++ program.cpp -o program
./program
```

---

# **🛠️ Debugging with GDB (GNU Debugger)**  
- Helps **find and fix errors** in a program.  

## ✅ **Compiling with Debug Symbols**  
```bash
gcc -g program.c -o program
gdb ./program
```

---


# **📝 Additional Notes**  

## **Step-by-Step Compilation Process**  
1. **Writing the Program:** Use a text editor to write the C code and save it as `demo.c`.
2. **Preprocessing:** The preprocessor processes `demo.c` and creates `demo.i` (intermediate file).
3. **Compilation:** The compiler converts `demo.i` to `demo.asm` (assembly code).
4. **Assembly:** The assembler converts `demo.asm` to `demo.obj` (object file).
5. **Linking:** The linker links `demo.obj` with libraries to create `demo.exe`.
6. **Execution:** The loader loads `demo.exe` into RAM for execution.

---

# **📌 GitHub Repository Details**  

📂 **Repo Name**: `C-Language`  
👤 **Owner**: [Abhishek Atole](https://github.com/Abhishek-Atole)  
🔗 **GitHub Link**: [C-Language Repository](https://github.com/Abhishek-Atole/C-Language.git)  

