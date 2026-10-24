#include <iostream>
using namespace std;

int main(void)
{
    int numbers[5]; // Aize of the array is 5 elements.
    numbers[0] = 111;
    numbers[1] = 21;
    numbers[2] = 123;
    numbers[3] = 1;
    numbers[4] = 523;

    int sum = 0;
    for (int index = 0; index < 5; index++)
    {
        cout << "Index: " << index << " " << numbers[index] << endl;
        sum += numbers[index];
    }
    cout << sum << endl;

    int goys[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int index = 0; index < sizeof(goys) / sizeof(goys[0]); index++)
    {
        int auxiliary = goys[index];
        goys[index] = goys[index + 1];
        goys[index + 1] = auxiliary;
    }

    for (int index = 0; index < sizeof(goys) / sizeof(goys[0]); index++)
    {
        cout << "Goy Index: " << index << "Goy Value: " << goys[index] << endl;
    }

    char jews[] = {'J', 'E', 'W'}; // Compiler will automatically determine the size.
    cout << sizeof(jews) / sizeof(jews[0]) << endl;

    return 0;
}
