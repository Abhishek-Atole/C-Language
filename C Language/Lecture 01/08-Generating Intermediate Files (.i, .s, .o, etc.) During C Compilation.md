# **🚀 Generating Intermediate Files (`.i`, `.s`, `.o`, etc.) During C Compilation**  

When compiling a **C program**, several intermediate files are generated before producing the final executable. You can manually generate these files using **GCC (GNU Compiler Collection)** or other compilers.  

---

## **✅ Compilation Stages in C**
A C program goes through multiple stages during compilation:  

| **Stage**        | **File Generated** | **Description** |
|-----------------|-----------------|---------------|
| **Preprocessing** | `.i` (Preprocessed File) | Expands macros and includes header files. |
| **Compilation** | `.s` (Assembly File) | Converts C code to assembly language. |
| **Assembly** | `.o` (Object File) | Converts assembly into machine code. |
| **Linking** | Executable File | Links object files to create the final program. |

---

## **📌 How to Generate Intermediate Files Using GCC**  
### **🔹 1. Generate the Preprocessed File (`.i`)**
To see the preprocessed source code (**after macro expansion and header file inclusion**):  
```bash
gcc -E program.c -o program.i
```
💡 **What happens?**  
- Expands `#include` and `#define` macros.  
- Removes comments.  
- The `.i` file contains pure C code after preprocessing.

---

### **🔹 2. Generate the Assembly Code (`.s`)**
To convert the C program into **assembly language**:  
```bash
gcc -S program.c -o program.s
```
💡 **What happens?**  
- The `.s` file contains **human-readable assembly instructions** for the CPU.

---

### **🔹 3. Generate the Object File (`.o` or `.obj`)**
To assemble the `.s` file into **machine code**:  
```bash
gcc -c program.c -o program.o
```
💡 **What happens?**  
- Produces a **binary file (`.o`)** that the CPU understands.  
- Cannot run directly because it lacks linking.

---

### **🔹 4. Generate the Executable File**
To create the final **executable**:  
```bash
gcc program.o -o program
```
💡 **What happens?**  
- Links required libraries and produces **a runnable executable**.

---

## **🔥 Generate All Intermediate Files in One Command**
If you want to **generate all files at once**, you can use:  
```bash
gcc -Wall -save-temps program.c -o program
```
💡 **What happens?**  
- Saves all intermediate files:  
  - `program.i` (preprocessed file)  
  - `program.s` (assembly file)  
  - `program.o` (object file)  
  - `program` (final executable)  

---

## **🚀 Summary**
| **Command** | **File Generated** | **Purpose** |
|------------|-----------------|-------------|
| `gcc -E program.c -o program.i` | `.i` (Preprocessed file) | Expands macros and includes headers. |
| `gcc -S program.c -o program.s` | `.s` (Assembly file) | Converts C code to assembly. |
| `gcc -c program.c -o program.o` | `.o` (Object file) | Converts assembly to machine code. |
| `gcc program.o -o program` | **Executable** | Links object files to create the final program. |

Now you can **inspect and analyze each step** of the compilation process! 🚀🔥


---

# **📌 GitHub Repository Details**  

📂 **Repo Name**: `C-Language`  
👤 **Owner**: [Abhishek Atole](https://github.com/Abhishek-Atole)  
🔗 **GitHub Link**: [C-Language Repository](https://github.com/Abhishek-Atole/C-Language.git)  