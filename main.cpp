#include <iostream>
using namespace std;

int main(void)
{
    unsigned short int counter = 99;
    while (--counter)
    {
        cout << counter << endl;

        if (counter % 50 != 0) continue; // Continue continues to the next iteration of the loop.

        cout << "Multiple of 50!" << endl;

        break; // Break breaks out of the loop.
    }

    return 0;
}
