# **📌 Programming Languages**  

## **What is a Programming Language?**  
A **programming language** is a **set of instructions** that allows us to communicate with a computer.  

### **🏗️ Real-Life Analogy: Recipe Book 📖**  
- Just like a **chef** follows a **recipe** to cook a dish 🍲,  
- A **computer** follows a **program** to execute tasks.  

---

## **🛠️ Levels of Programming Languages**  
Programming languages are categorized into different levels based on their abstraction and complexity.  

![Levels of Languages](.\/images/Levels%20of%20languages.jpg)

-----

| Level | Description | Example Languages |
|------|------------|-------------------|
| **1️⃣ Low-Level** | Directly interacts with hardware; includes binary and assembly languages. | Machine Code, Assembly |
| **2️⃣ Middle-Level** | Provides some abstraction while maintaining control over hardware. | C, C++ |
| **3️⃣ High-Level** | Abstracted from hardware, easier to read and write. | Java, Python, JavaScript |

---

## **🛠️ Types of Programming Languages**  

| Type | Description | Example Languages |
|------|------------|-------------------|
| **1️⃣ Procedural** | Code runs step by step, following a procedure. | C, Pascal |
| **2️⃣ Structured** | Uses loops and conditional statements to control flow. | C, Ada |
| **3️⃣ Object-Oriented (OOP)** | Code is organized into objects and classes. | C++, Java, Python |
| **4️⃣ Functional** | Based on mathematical functions (pure functions). | Lisp, Haskell |
| **5️⃣ Scripting** | Used for automation and web development. | Python, JavaScript |

---

## **✅ Procedural Programming (C Language)**  
- **Follows a step-by-step approach**  
- Uses **functions** to break down tasks  

### **🔥 Example: Procedural Programming in C**
```c
#include <stdio.h>

// Function definition
void greet() {
    printf("Hello, Abhishek!\n");
}

int main() {
    greet(); // Function call
    return 0;
}
```
✅ **Explanation**:  
- We define a function **greet()**  
- We call the function in **main()**  

---

## **✅ Object-Oriented Programming (C++)**  
- **Encapsulates data and functions into objects**  
- Uses **classes**  

### **🔥 Example: Object-Oriented Programming in C++**
```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void showBrand() {
        cout << "Car brand: " << brand << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Tesla";
    myCar.showBrand();
    return 0;
}
```
✅ **Explanation**:  
- `Car` is a **class**  
- `brand` is a **data member**  
- `showBrand()` is a **method**  

---

# **🖥️ Operating System Basics**  

## **What is an Operating System (OS)?**  
An **OS** is software that manages **hardware and software resources**.  

### **🏗️ Real-Life Analogy: Airport Management ✈️**  
- **OS** = **Airport Management System**  
- **CPU** = **Pilots** (Processes instructions)  
- **RAM** = **Runway** (Temporary data storage)  
- **Hard Disk** = **Luggage Storage**  

## **🛠️ Types of Operating Systems**  

| OS Type | Description | Example |
|---------|------------|---------|
| **Single-user** | One person at a time | Windows, macOS |
| **Multi-user** | Multiple users at once | Linux, UNIX |
| **Real-time** | Used in mission-critical systems | Embedded OS, RTOS |

---

# **🛠️ x86 Toolchain and GCC Toolchain**  

## **📌 What is x86 Architecture?**  
- **x86** is a **CPU architecture** developed by **Intel**.  
- It is used in most **desktop and laptop computers**.  

### **🏗️ Real-Life Analogy: Blueprint for a House 🏡**  
- Just like a house has a **design blueprint**,  
- A CPU follows the **x86 instruction set**.  

---

## **✅ Components of x86 Toolchain**  
| Tool | Description | Command |
|------|------------|---------|
| **Assembler (`as`)** | Converts assembly code to machine code | `as program.s -o program.o` |
| **Linker (`ld`)** | Links object files to create an executable | `ld program.o -o program` |
| **Debugger (`gdb`)** | Helps debug the program | `gdb program` |

---

## **🔥 Using the x86 Toolchain with GCC**  
🔹 **Compile an Assembly File**  
```bash
as program.s -o program.o
```

🔹 **Link the Object File**  
```bash
ld program.o -o program
```

🔹 **Run the Program**  
```bash
./program
```

---

# **🚀 Summary**  

✅ **Programming Languages**: Low-Level, Middle-Level, High-Level  
✅ **Operating System**: Manages CPU, RAM, Disk, Devices  
✅ **x86 Toolchain**: Uses `as`, `ld`, `gcc`, `gdb`  
✅ **GCC Toolchain**: Preprocessing → Compilation → Assembly → Linking  

---

# **📌 GitHub Repository Details**  

📂 **Repo Name**: `C-Language`  
👤 **Owner**: [Abhishek Atole](https://github.com/Abhishek-Atole)  
🔗 **GitHub Link**: [C-Language Repository](https://github.com/Abhishek-Atole/C-Language.git)

