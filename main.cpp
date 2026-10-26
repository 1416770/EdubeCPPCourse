#include <iostream>
using namespace std;

int main(void)
{
    int index = 1;
    index = index > 0 ? 1 : 0;
    // These are the same thing!
    if (index > 0)
    {
        index = 1;
    } 
    else
    {
        index = 0;
    }

    return 0;
}
