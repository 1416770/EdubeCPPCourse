#include <iostream>
using namespace std;

/*
Inline functions execute way faster than normal functioms however they're only to be used when
the function has only 1 - 3 lines of code.

The way inline functions work is the compiler copies the body of the function to the point
of each function call at compile time. This can affect file size after compilation so
it's important to only use inline functions for small functions. They do benefit the coder
a lot for small functions that are called frequently. Drastically speeding up the code.

During function calls, a lot of overhead tasks are done. Functions make it easier to reuse
code and make things more modular and easier to understand. The side effect is of course
the effect they have on speed.
*/

inline void inline_function()
{
    cout << "main --> function --> main" << endl;
}

void normal_function()
{
    cout << "main --> prologue --> function --> epilogue --> main" << endl;
}

inline void good_inline_use() // 1 - 3 lines.
{
    cout << "yes sir" << endl;
    cout << "yes sir" << endl;
    cout << "yes sir" << endl;
}

void good_normal_use() // 4+ lines.
{
    cout << "say wallahi" << endl;
    cout << "say wallahi" << endl;
    cout << "say wallahi" << endl;
    cout << "say wallahi" << endl;
}

int main(void)
{
    inline_function();
    normal_function();

    return 0;
}
