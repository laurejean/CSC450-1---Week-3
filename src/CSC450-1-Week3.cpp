//============================================================================
// Name        : CSC450-1-Week3.cpp
// Author      : Laure A-G Jean
// Version     :
// Copyright   : Your copyright notice
// Description : Integer Pointers Program
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables
    int value1, value2, value3;

    // Ask the user to input three integer values
    cout << "Enter three integer values:\n";
    cin >> value1 >> value2 >> value3;

    // Dynamically allocate memory for each variable
    int* ptr1 = new int(value1);
    int* ptr2 = new int(value2);
    int* ptr3 = new int(value3);

    // Display the contents of the variables and pointers
    cout << "\nValues stored in variables:\n";
    cout << "Value 1: " << value1 << "\n";
    cout << "Value 2: " << value2 << "\n";
    cout << "Value 3: " << value3 << "\n";

    cout << "\nValues stored in dynamically allocated memory through pointers:\n";
    cout << "*ptr1: " << *ptr1 << "\n";
    cout << "*ptr2: " << *ptr2 << "\n";
    cout << "*ptr3: " << *ptr3 << "\n";

    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    cout << "\nMemory has been successfully freed.\n";

    return 0;
}
