C-DSA-College-EXP9

Pointers Program 1: Different Ways to Display Pointer Output

Explanation and Theory: This program demonstrates the basic concept of pointers in C++. It declares an integer variable a with a value of 146 and a pointer p that stores the address of a. The program then displays:

The value of a

The memory address of a

The value stored in p (which is the address of a)

The value pointed to by p using the dereference operator *

This example shows how pointers can be used to access and manipulate data stored at specific memory locations, which is an important concept in memory management.

Algorithm:

Start

Declare an integer variable a and assign it the value 146

Declare a pointer p and assign it the address of a

Print the value of a

Print the address of a using &a

Print the value of p (address of a)

Print the value pointed to by p using *p

End

Program 2: Updating a Variable Value Using a Pointer

Explanation and Theory: This program illustrates how pointers can be used to update variables and access array elements. An integer a is initialized to 123, and a pointer p stores its address. The program:

Prints the value of a using *p

Updates a through the pointer (*p = 456)

Prints the updated value of a

It also declares an integer array and prints its first element using *array, showing how arrays and pointers are closely related in C++.

Algorithm:

Start

Declare int a = 123

Declare pointer p = &a

Print *p (value of a)

Update value at p to 456

Print the new value of a

Declare an integer array of 5 elements

Print the first element using *array

End

Program 3: Pointer Incrementation

Explanation and Theory: This program demonstrates pointer arithmetic with arrays. An integer array a is initialized with five values. A pointer p is assigned to point to the first element of the array. The program:

Prints the first element using *p

Uses a loop to print each element by incrementing the pointer (p++)

This example highlights that in C++, incrementing a pointer moves it to the next memory location, allowing sequential access to array elements.

Algorithm:

Start

Declare int a[5] = {10, 20, 30, 40, 50}

Initialize pointer p = a

Print *p (first element)

Loop from i = 0 to 4:

Print *p

Increment p++

End

Conclusion

These three programs demonstrate the fundamentals of pointers in C++ and their relationship with variables and arrays:

Program 1 shows how to store and access variable values and addresses using pointers.

Program 2 highlights how pointers can modify variable values and access array elements.

Program 3 explains pointer arithmetic and how to traverse arrays.

Together, these examples provide a strong foundation in understanding pointers, an essential concept for memory management, data manipulation, and efficient programming in C++.
