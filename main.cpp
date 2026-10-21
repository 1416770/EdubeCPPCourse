/*
    + is addition
    - is subtraction
    / is division
    * is multiplication
    E is x times 10 to the power of y (5E5 (5 times 10 to the power of 5))
    ^ is power (x * 10 ^ y)
    % modulo operation (i = 13, j = 5, k = i % j (3 because j goes into i 2 times with a remainder of 3))

    you can't divide by 0 or compute a remainder with the right argument being 0 because 0 makes the compiler cry

    2 * 3 % 5 is 1, 2 * 3 is 6, then we have 6 % 5, 5 goes into 6 once with a remainder of 1 so the answer is 1
    multiplication comes before the modulo operation, both have the same priority in terms of bidmas so operations
    are done from left to right

    -------------------------------
    int sheep_counter = 0;

    sheep_counter = sheep_counter + 1;
    sheep_counter++; increment operator (postfix operator)

    sheep_counter = sheep_counter - 1;
    sheep_counter--; decrement operator (postfix operator)

    you can also do prefix operators
    --sheep_counter;
    ++sheep_counter;
    ----------------------------------

    x += 1 (x = x + 1)
    x -= 1 (x = x - 1)
    x *= 2 (x = x * 2)
    x /= 2 (x = x / 2)
    x %= 10 (x = x % 10)
*/

/*
 int i = 100
 int j = 25
 int k = 13
 int l = (5 * ((j % k) + i) / (2 * k)) / 2

 B brackets ()
 I indices x^y
 D division /
 M multiplication *
 A addition +
 S substraction -

 (5 * ((j % k) + i) / (2 * k))

 (j % k) = 12
 ((j % k) + i) = 112
 (2 * k) = 26

 ((j % k) + i) / (2 * k) --> 112 / 26 = 4
 (5 * ((j % k) + i) / (2 * k)) --> 5 * 4 = 20
 (5 * ((j % k) + i) / (2 * k)) / 2 --> 20 / 2 = 10

 26 (1)
 52 (2)
 78 (3)
 104 (4)
 130 (5)

 l = 10
*/

/*  PRIORITY TABLE
    + *+ -- + - 	unary
    * / %
    + - 	binary
    =
*/

#include <iostream>

int main(void) {
    int negative_int = -100;
    int positive_int = -negative_int; // unary operator

    // x will be 2 and y will be 1
    int x = 1;
    int y = x++;

    std::cout << 'x' << x << std::endl;
    std::cout << 'y' << y << std::endl;

    // i will be 2 and j will be 2
    int i = 1;
    int j = ++i;

    std::cout << 'i' << i << std::endl;
    std::cout << 'j' << j << std::endl;

    return 0;
}
