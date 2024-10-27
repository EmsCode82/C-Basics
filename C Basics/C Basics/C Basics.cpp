// C Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    // ---------------------------------------------------------------------------

    // Lesson 1: Hello World
    std::cout << "Welcome to C++ learning.\n\n" << std::endl;
    std::cout << "Lesson 1 - Display Hello World\n\n";
    

    // ---------------------------------------------------------------------------

    // Lesson 2: Hello World, Basic I/O Input - Output
    std::cout << "Lesson 2 - Basic I/O Input Output\n\n";
    
    // Declare string variable
    std::string name;
    
    // Output string to console
    std::cout << "Please enter your name: ";
    
    // Input user input into string variable
    std::cin >> name;
    
    // Output string with user string variable stored data
    std::cout << "\nHello, " << name << "! Nice to meet you." << std::endl;

    // ---------------------------------------------------------------------------
    
    // Lesson 3: Variables, Data Types, Operators
    
    // Declare integer variable
    int age = 42;

    // Declare floating-point number
    float pi = 3.14159;

    // Declare character
    char grade = 'A';

    // Declare boolean
    bool isStudent = false;

    // Output stored data in variables
    std::cout << "\nAge: " << age << std::endl;
    std::cout << "\nPi: " << pi << std::endl;
    std::cout << "\nGrade: " << grade << std::endl;
    std::cout << "\nIs Student? " << (isStudent ? "Yes" : "No") << std::endl;

    // Basic arithmatic operators
    int x = 10;
    int y = 3;

    std::cout << "x + y = " << x + y << std::endl;
    std::cout << "x - y = " << x - y << std::endl;
    std::cout << "x * y = " << x * y << std::endl;
    std::cout << "x / y = " << (float)x / y << std::endl; // Cast to float for decimal result
    std::cout << "x % y = " << x % y << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
