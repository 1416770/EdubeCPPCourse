#include <iostream>
#include <cmath>
using namespace std;

// Just like how the << operator is referred to as the insertion operator. The >> operator is referred to as the extraction operator.

// We can use the cin stream along with the extraction operator to transfer human readable data from a console for example to the internal machine representation of the data.

// cmath must be imported to use math functions like sqrtf (square root float). sqrtf requires a float as specified in its name.

// If you're trying to enter a string with cin when it's expecting an int; it will be 0.

int main(void)
{
    int number_of_clouds;
    cout << "Enter the number of clouds: ";
    cin >> number_of_clouds; // Sets the variable to whatever the user inputs.
    cout << "\n Number of clouds: " << number_of_clouds;

    float value;
    cout << "\n Give me a number to find its square root: ";
    cin >> value;
    cout << "\n Its square root is: " << sqrtf(value);

    return 0;
}
