#include <iostream>
using namespace std;

/*
If you declare a pointer like "type *pointer" then pointer is of type "type*" and "*" is of type "type".
Don't ever dereference a NULL pointer or explosion.
*/

int main(void)
{
    // Creates a variable and a pointer.
    int myVariable, *variablePointer;
    myVariable = 2; // Assigns 2 to the variable.
    variablePointer = &myVariable; // The pointer is now the memory address of the variable.

    cout << variablePointer << endl; // Outputs the memory address of myVariable.
    cout << *variablePointer << endl; // Grabs the value at the memory address.

    *variablePointer = 4;

    cout << myVariable << endl; // myVariable is now 4!
    cout << sizeof(*variablePointer) << endl; // The size of myVariable in bytes.

    return 0;
}
