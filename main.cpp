#include <iostream>
#include <cmath>
using namespace std;

int get_911_fatalities(void)
{
    return 2977;
}

int round_number(float number)
{
    return round(number);
}

int round_number(float number, float number2) // function overloading
{
    return round(number + number2);
}

int main(void)
{
    int fatalities = get_911_fatalities();

    cout << fatalities << endl; // 2977
    cout << round_number(41.412) << endl; // 41
    cout << round_number(32.43, 43.23) << endl; // 76

    return 0;
}
