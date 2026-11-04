#include <iostream>
using namespace std;

int main(void)
{
    long data = 1L; // Literal. You can use this to avoid conversion.

    // Implicit conversions are automatic from the compiler.
    // Explicit conversions (typecasting) are performed by the developer.

    int inty_winty = 5;
    float floaty_woaty = float(inty_winty); // TYPE CASTING 🥳
    float this_works_too = inty_winty;

    cout << inty_winty << " " << floaty_woaty << " " << this_works_too << "!" << endl;

    return 0;
}