#include <iostream>
using namespace std;

void go_for_a_walk()
{
    cout << "\n walk";
}

void go_to_the_theater()
{
    cout << "\n hahahahaa";
}

void go_for_lunch()
{
    cout << "\n nom nom nom";
}

void play_chess_at_home()
{
    cout << "\n checkmate";
}

int main(void)
{
    bool weather_good;
    bool tickets_available;
    bool table_available;

    cout << "Is the weather good? (true or false): ";
    cin >> weather_good;

    cout << "\n Are tickets available? (true or false): ";
    cin >> tickets_available;

    cout << "\n Is there a table available? (true or false): ";
    cin >> table_available;

    if (weather_good)
        go_for_a_walk();
    else if (tickets_available)
        go_to_the_theater();
    else if (table_available)
        go_for_lunch();
    else
        play_chess_at_home();

    return 0;
}
