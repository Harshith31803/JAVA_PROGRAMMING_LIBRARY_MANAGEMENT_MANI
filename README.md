Custom Big Integer Calculator

Project Description

The Custom Big Integer Calculator is a C++ project designed to perform arithmetic operations on integers that are too large to be handled by standard C++ integer data types such as int or long long.

The project represents large numbers using strings and implements arithmetic operations manually. This allows the program to work with numbers containing many digits while avoiding the limitations of built-in integer data types.

Features

The calculator provides the following operations:

1. Addition – Adds two large integers.
2. Subtraction – Subtracts one large integer from another.
3. Multiplication – Multiplies two large integers.
4. Comparison – Compares two large integers and determines which is greater or whether they are equal.
5. Negative Numbers – Supports numbers with a negative sign.
6. Leading Zero Removal – Removes unnecessary zeros from the beginning of numbers.
7. Interactive Menu – Provides a simple menu through which the user can select an operation.

Technologies Used

* Programming Language: C++
* Compiler: GCC / MinGW
* IDE: Visual Studio Code
* Operating System: Windows
* Data Representation: C++ string
* Version Control: Git and GitHub

Project Structure

BigIntegerProject/
│
├── BigInteger.h
├── BigInteger.cpp
├── main.cpp
└── README.md

BigInteger.h

This header file contains the declaration of the BigInteger class. It defines the data members, constructors, input/output functions, arithmetic operators, and comparison operators.

BigInteger.cpp

This file contains the implementation of the BigInteger class. It performs operations such as addition, subtraction, multiplication, and comparison using string-based calculations.

main.cpp

This file contains the main program and menu-driven interface. It accepts input from the user, calls the required operations, and displays the results.

README.md

This file provides information about the project, its features, structure, technologies, and usage instructions.

How It Works

Instead of storing a large number in an ordinary integer variable, the program stores the number as a string.

For example:

123456789123456789123456789

Each digit can be processed individually. Arithmetic operations are performed digit by digit, similar to the method used for manual calculations.

This approach allows the program to handle numbers much larger than the maximum value supported by standard integer data types.

Example

When the program is executed, it displays a menu:

========== BigInteger Calculator ==========
1. Addition
2. Subtraction
3. Multiplication
4. Compare Numbers
5. Exit
Enter your choice:

For addition, the user can enter two large numbers:

Enter First Number: 123456789123456789
Enter Second Number: 987654321987654321

The program calculates and displays the result.

Advantages

* Can handle very large integers.
* Does not depend on the size limitations of standard integer types.
* Demonstrates operator overloading in C++.
* Uses object-oriented programming concepts.
* Provides a simple menu-driven interface.
* Helps understand string manipulation and arithmetic algorithms.

Learning Outcomes

Through this project, the following concepts can be understood:

* C++ classes and objects
* Constructors
* Encapsulation
* Operator overloading
* String manipulation
* Loops and conditional statements
* Arithmetic algorithms
* Handling positive and negative numbers
* Menu-driven programming
* Compilation and execution using GCC
* Git and GitHub project management

Future Improvements

The project can be extended by adding:

* Division of large integers
* Modulus operation
* Power calculation
* Square root
* Better handling of invalid input
* Faster multiplication algorithms
* More advanced mathematical operations
* Graphical user interface

Conclusion

The Custom Big Integer Calculator demonstrates how large integer arithmetic can be implemented in C++ without depending on built-in integer limits. By representing numbers as strings and performing calculations digit by digit, the project provides a practical understanding of data representation, algorithms, classes, and operator overloading.

The project also demonstrates the complete development workflow, including writing source code, compiling the program, testing different inputs, and maintaining the project using GitHub.
