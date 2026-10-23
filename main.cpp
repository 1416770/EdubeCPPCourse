#include <iostream>
#include <iomanip>

using namespace std;

/*
<< is insertion operator. The arrows show the direction.
endl ends a line.

hex (hexadecimal) is a manipulator. A manipulator is a special entity that tells the stream that the data form has to be changed immediately. A manipulator changes the output streams property called basefield. A manipulator won't stop working until cancelled out by another manipulator; even after the end of the cout statement. It works from the position it was placed.

There are other manipulators too such as dec (decimal) and oct (octal). Decimal is the default manipulator for output streams.

setbase(x) is another way at manipulating the output stream. 8 is for octal, 10 for decimal and 16 for hexadecimal. setbase(x) also requires the import of iomanip; using oct, hex and dec don't.'
*/

int main(void)
{
    int herd_size = 110; // decimal
    cout << "sheep counted: " << herd_size << endl; // decimal
    cout << "herd size in hex: " << hex << herd_size << endl; // hex

    int test = herd_size; // hex
    cout << test << endl; // hex
    cout << dec << test << endl; // decimal

    cout << setbase(8) << herd_size << endl; // octal

    return 0;
}
