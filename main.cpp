#include <iostream>
using namespace std;

void go_for_a_walk()
{
    cout << "walk" << endl;
}

void go_to_the_theater()
{
    cout << "hahahahaa" << endl;
}

void go_for_lunch()
{
    cout << "nom nom nom" << endl;
}

void play_chess_at_home()
{
    cout << "checkmate" << endl;
}

int main(void)
{
    bool weather_good = true;
    bool tickets_available = false;
    bool table_available = true;

    // the way of assembling the if statements is called a cascade
    if (weather_good)
    {
        go_for_a_walk();

    }
    else if (tickets_available)
    {
        go_to_the_theater();

    }
    else if (table_available)
    {
        go_for_lunch();

    }
    else
    {
        play_chess_at_home();

    }

    return 0;
}
