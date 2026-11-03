#include <iostream>
using namespace std;

// The "new" keyword is used to request the creation of a new memory block.
// This returns a pointer. You also need to specify the size when using this with arrays.

// The "delete" keyword is used to hand the memory back to the operating system.

// You only really need to use new and delete if the lifetime of a variable is not defined by its scope.
// Or if the size of something is not known at compile time.

int main(void)
{
    int *number = new int;
    delete number;

    float *array = new float[20];
    delete []array;

    float *floaty_fish = new float[5];
    for (int index = 0; index < 5; index++)
    {
        floaty_fish[index] = index * index;
        cout << floaty_fish[index] << endl;
    }
    delete []floaty_fish;

    return 0;
}