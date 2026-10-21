#include <iostream>
using namespace std;

void make_a_bed()
{ // K & R style, K & R are the initials of the creator of C
    cout << "make a bed" << endl;
}

void take_a_shower()
{
    cout << "take a shower" << endl;
}

void sleep_and_dream()
{
    cout << "sleep and dream" << endl;
}

void feed_the_sheepdogs()
{
    cout << "feed the sheepdogs" << endl;
}

int main(void)
{
    int sheep_counter = 134;
    if (sheep_counter >= 120)
    {
        make_a_bed();
        take_a_shower();
        sleep_and_dream();
    }
    else if (sheep_counter >= 50)
    {
        take_a_shower();
        sleep_and_dream();
    }
    else sleep_and_dream();

    feed_the_sheepdogs();

    return 0;
}
