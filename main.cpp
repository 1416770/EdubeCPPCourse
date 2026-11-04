#include <iostream>
using namespace std;

int main(void)
{
    int rows, columns;
    cout << "How many rows?: ";
    cin >> rows;
    cout << "How many columns?: ";
    cin >> columns;

    // A pointer to an array filled with pointers to more arrays with integers?
    int** pointer_array = new int*[rows];
    for (int row = 0; row < rows; row++)
    {
        pointer_array[row] = new int[columns];
        cout << "Row: " << pointer_array[row] << endl;

        for (int column = 0; column < columns; column++)
        {
            cout << "Column: " << pointer_array[row][column] << endl;
        }
    }

    return 0;
}