#include <iostream>

using namespace std;
int main(void) {
    // E means times ten to the power of x
    // ^ means to the power

    float my_float = 3 * 10 ^ 8;
    float my_second_float = 3E8;

    cout << my_float << endl;
    cout << my_second_float << endl;

    return 0;
}
