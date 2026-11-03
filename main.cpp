#include <iostream>
using namespace std;

// Void indicates nothing. This function returns nothing and takes nothing.
void voidy(void)
{

}

int main(void)
{
    int inty = 34;

    // You can use "void" for when you're not sure what the type will be. It lets you assign any type.
    void *pointy;
    pointy = &inty;

    cout << pointy << endl;

    return 0;
}