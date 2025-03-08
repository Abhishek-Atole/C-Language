# Computer Architecture Assignment

## 1. What are the components of a computer?
The main components of a computer system are:
- **Central Processing Unit (CPU)**: The brain of the computer that executes instructions.
  - **Control Unit (CU)**: Directs the operation of the processor.
  - **Arithmetic Logic Unit (ALU)**: Performs arithmetic and logical operations.
  - **Registers**: Small, fast storage locations for data and instructions.
- **Memory**: Temporary storage for data and instructions that are actively being processed.
  - **RAM (Random Access Memory)**: Volatile, fast memory.
  - **Cache Memory**: High-speed storage that holds frequently used data.
- **Storage Devices**: For long-term data storage, such as hard drives or SSDs.
- **Input Devices**: Devices like keyboards and mice to input data.
- **Output Devices**: Devices like monitors and printers to display or output data.

## 2. What are the types of Storage Devices?
Storage devices can be classified into:
- **Primary Storage (Volatile)**:
  - **RAM (Random Access Memory)**
  - **Cache Memory**
- **Secondary Storage (Non-Volatile)**:
  - **Hard Disk Drives (HDD)**
  - **Solid-State Drives (SSD)**
  - **Optical Discs (CD/DVD)**
  - **Flash Drives**

## 3. What is mean by x86 Toolchain?
The **x86 Toolchain** refers to a set of development tools used to create programs for the x86 architecture. It includes:
- **Editor**: A text editor to write source code.
- **Preprocessor**: A tool that processes source code before compilation.
- **Compiler**: Converts source code into machine code.
- **Assembler**: Converts assembly code into machine code.
- **Linker**: Combines object files into an executable.
- **Loader**: Loads the executable into memory for execution.

## 4. What are the types of CPU registers? Explain the use of each CPU register.
CPU registers are small, high-speed storage locations that hold data and addresses. Common types include:
- **General Purpose Registers (GPR)**: Used for temporary storage during computations.
  - **EAX, EBX, ECX, EDX**: Used for arithmetic, logical operations, and passing arguments.
- **Segment Registers**: Define the segments of memory.
  - **CS (Code Segment)**: Holds the address of the currently executing code.
  - **DS (Data Segment)**: Contains data values.
  - **SS (Stack Segment)**: Points to the stack for function calls and local variables.
- **Pointer Registers**: Hold addresses.
  - **SP (Stack Pointer)**: Points to the top of the stack.
  - **BP (Base Pointer)**: Points to the base of the stack frame.
- **Index Registers**:
  - **SI (Source Index)** and **DI (Destination Index)**: Used in string operations and memory addressing.
- **Flags Register**: Stores flags for the status of the CPU, such as zero, carry, and overflow.

## 5. Explain the working of each component from X86 Toolchain. i.e., Editor, Preprocessor, Compiler, Assembler, Linker, Loader.
- **Editor**: A tool to write and modify source code (e.g., VS Code, Sublime Text).
- **Preprocessor**: Processes directives like `#include` and `#define` in C/C++ before compilation.
- **Compiler**: Converts the preprocessed code into assembly or machine code.
- **Assembler**: Converts assembly language code into machine code (object files).
- **Linker**: Combines object files into an executable, resolving addresses and dependencies.
- **Loader**: Loads the final executable into memory, so it can be executed.

## 6. What are the tasks of Operating Systems?
The main tasks of an operating system include:
- **Process Management**: Creating, scheduling, and terminating processes.
- **Memory Management**: Allocating and managing memory resources.
- **File System Management**: Organizing and storing files on disk.
- **Device Management**: Managing input/output devices and providing drivers.
- **Security**: Protecting the system from unauthorized access.
- **User Interface**: Providing an interface for users to interact with the system.

## 7. What is meant by Cache memory & what are the types of Cache memory?
**Cache memory** is a small, high-speed storage located close to the CPU, used to store frequently accessed data for faster retrieval.
- **Levels of Cache**:
  - **L1 Cache**: Smallest and fastest, located directly on the CPU chip.
  - **L2 Cache**: Larger but slower than L1, typically located near the CPU.
  - **L3 Cache**: Even larger, shared between multiple cores on the CPU.

## 8. Explain each step of the below diagram:
### CPU -> EU -> RCU -> AH AL -> BIU -> ECU -> CS -> DS
(Description of the diagram can be explained as follows):
- **CPU (Central Processing Unit)**: Executes instructions.
- **EU (Execution Unit)**: Executes arithmetic and logical operations.
- **RCU (Register Control Unit)**: Manages the registers in the CPU.
- **AH AL**: The high and low parts of the accumulator register.
- **BIU (Bus Interface Unit)**: Handles data transfer between CPU and memory.
- **ECU (Execution Control Unit)**: Controls the execution sequence of instructions.
- **CS (Code Segment)**: Stores the code being executed.
- **DS (Data Segment)**: Stores the data.

## 9. What are the contents of Primary Header?
The **Primary Header** in executable files contains metadata, such as:
- **Magic Number**: Identifies the file format.
- **File Type**: Defines whether it's an executable, object file, etc.
- **Entry Point Address**: The starting address of program execution.
- **Size of Program Headers**: Describes the layout of the file in memory.
- **Size of Sections**: Specifies the memory layout of sections like text, data, and bss.

## 10. What is meant by Text, Data, Stack section?
- **Text Section**: Contains the executable code of a program.
- **Data Section**: Holds initialized global and static variables.
- **Stack Section**: Used for function calls, local variables, and return addresses.
