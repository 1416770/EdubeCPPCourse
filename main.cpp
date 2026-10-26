#include <iostream>
using namespace std;

// When you have two functions with the same name it's referred to as function overloading.
// As long as both the functions have different parameters it works.
// It means you can have multiple versions of the same function.
void greet(void)
{
    cout << "Welcome aboard lad!" << endl;
}

void greet(int ego_size)
{
    for (int index = 0; index < ego_size; index++)
    {
        greet();
    }
}

// Without the & symbol the parameter only holds the value of the variable you passed in.
void pass_by_value(int param) 
{
    param++;
}

// By adding the & symbol the parameter becomes a variable to the variable you passed in.
// References allow the function to modify the original variable.
void pass_by_reference(int &param)
{
    param++;
}

// Passing by pointer is how you pass_by_reference in C since C doesn't have anything like references.
// Prefer references but this works too.
void pass_by_pointer(int *pointer)
{
    // For some reason you can't just do *pointer++;
    *pointer = *pointer + 1;
}

// By using the assignment operator after a parameter you can declare a default value.
// This means you don't need to pass a value to the function parameter.
void say_message(string message = "hi")
{
    cout << message << endl;
}

int main(void)
{
    int ego_size;
    cout << "How big is your ego?: ";
    cin >> ego_size;
    greet(ego_size);

    int chinese = 43;
    cout << "Chinese: " << chinese << endl;

    pass_by_value(chinese);
    cout << "Chinese after pass_by_value: " << chinese << endl;

    pass_by_reference(chinese);
    cout << "Chinese after pass_by_reference: " << chinese << endl;

    int *chinese_pointer = &chinese;
    pass_by_pointer(chinese_pointer);
    cout << "Chinese after pass_by_pointer: " << chinese << endl;

    say_message();
    say_message("grrr mondays");

    return 0;
}
