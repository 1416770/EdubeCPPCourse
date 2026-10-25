#include <iostream>
using namespace std;

int main(void)
{
    int *ptr1, *ptr2, array[3], i;
    ptr1 = array; // Points to the first element of the array (index 0).
    ptr2 = ptr1; // Same as above now.
    cout << (ptr1 == ptr2) << endl; // True.

    ptr1++; // Pointer 1 is now the second element of the array (index 1).
    cout << (*ptr1 == array[1]) << endl; // True.

    ptr1--;
    cout << (*ptr1 == array[0]) << endl; // True.
    
    return 0;
}
