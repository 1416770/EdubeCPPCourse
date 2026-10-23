#include <iostream>
using namespace std;

int main(void)
{
    char character = 'a';
    int character_ascii_code = character; // Converters the character into ASCII code.

    // You can also use (datatype)variable to cast datatypes.
    // You can use endl to end a line.
    cout << character << (int)character << character_ascii_code << (char)character_ascii_code << endl;

    // You can also use \n to end a line; the compiler sees it as one character.
    cout << "1\n2\n3\n3";

    return 0;
}
