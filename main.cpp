#include <iostream>
using namespace std;

int main(void)
{
    unsigned short int counter = 5;
    while (counter)
    {
        cout << "Counter: " << counter-- << endl;
    }

    counter = 5;
    do
    {
        cout << "Counter: " << counter-- << endl;
    } while (counter);
    
    for (unsigned short int index = 0; index < 100; index++)
    {
        cout << "Counter: " << index << endl;
    }

    for ( ; ; ) // Infinite loop singularity?
    {
        cout << "We're all just blocking the street!";
    } 

    return 0;
}
