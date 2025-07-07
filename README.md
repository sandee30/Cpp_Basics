# 💡 Learn What Matters: C/C++ Core Programming Course

Welcome to **Learn What Matters** – a focused, hands-on C/C++ course that teaches the **low-level fundamentals** that are essential for writing efficient, bug-free, and real-world-ready code.

Instead of jumping into Object-Oriented Programming or complex libraries, this course brings you back to the **core of programming**: how memory works, how arrays and pointers interact, and how C-style logic still forms the backbone of modern C++.

---

## 🚀 Topics You Will Master

🧠 **Dynamic Memory Allocation (DMA)**  
Understand how memory works using `malloc`, `calloc`, `free`, `new`, `delete`, and how to avoid memory leaks.

📍 **Pointers & Pointer Arithmetic**  
Single, double, and even triple pointers; pointer to arrays, pointer to functions, and how memory is accessed directly.

🔢 **Arrays & Strings (C-style)**  
Manipulating arrays and strings using loops, pointers, and functions — building your own versions of `strlen`, `strcpy`, etc.

🔁 **Function Design & Overloading Basics**  
Passing by value/reference/pointer, function overloading in C++, and understanding inline and recursive functions.

🧩 **Memory Layout of Variables**  
Stack vs Heap, scope & lifetime, static/global memory, and how variables are actually arranged in RAM.


This repo contains questions related to Dynamic Memory Allocation, Functions (Overloading, Inline, Pass by Reference, Return by Reference), Namespace, Reference Variables, Structures, Arrays, Pointers.

**Questions:**

1. Write a program to find the positions of the character entered by the user from the sentence "idea without execution is worthless" using a pointer and string(array of characters).


2. Using Dynamic Memory Allocation, Store and retrieve the name of the N students and obtained marks of Maths in 1st semester using structure. Also, sort the array of structures in     ascending order on the basis of their obtained math marks as well as on the basis of their name in ascending order. Make two separate functions for sorting.
 
3. Write a program that dynamically allocates memory for an array of integers. Ask the user for the size and values. Then calculate and display the average of all numbers entered.


4. Write a program to dynamically allocate memory for a 2D array (matrix), take user input, and print the transpose of the matrix.

  
5. Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and a function named "fun". The "fun" function in the "Square" namespace, should return the square of an integer passed as an argument while the "fun" function in the "Cube" namespace, should return the cube of an integer passed as an argument. In the main function, set the integer variables "num" of both the namespaces with different values. Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.

6. Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by the user by using return by reference.

7. Write a program using the function overloading that converts feet to inches. Use a function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the functions above.

8. Assume that the employee will have to pay 10 percent income tax to the government. Ask users to enter the employee salary. Use an inline function to display the net payment to the   employee by the company.

9.  Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function.

10. Write function reverseArray() that reverses the elements of an integer array using reference parameters (pointer or reference to array).

11. Create overloaded functions max() to return the maximum of: 
     Two integers 
     Two floats 
     Three integers

12. Write a program to read the name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file, sort the information alphabetically according to the name.

**Note : ** The solution programs of above questions are sequentially available in this repo with the file name 1,2,3... according to the question number.
