#include <iostream>
using namespace std;

/*
& (ampersand) 	bitwise conjunction
| (bar) 	    bitwise disjunction
~ (tilde) 	    bitwise negation
^ (caret) 	    bitwise exclusive or

& requires exactly two “1s” to provide “1” as the result
| requires at least one “1” to provide “1” as the result
^ requires only one “1” to provide “1” as the result
~ (is one argument and) requires “0” to provide “1” as the result

You can use >> and << to shift values. >> Shifts to the right and << shifts to the left.
6 << 1 is equivalent to 6 * 2
6 >> 1 is equivalent to 6 / 2

----- PRIORITY TABLE -----
! ~ (type) ++ -- + -
* / % 	
+ -
<< >> 	
< <= > >= 	
== != 	
& 	
| 	
&& 	
|| 	
= += -= *= /= %= &= ^= | >>= <<=
*/

int main(void)
{
    if (true || false); // or
    if (true && true); // and

    return 0;
}
