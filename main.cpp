#include <iostream>
using namespace std;

int main(void)
{
    struct STUDENT
    {
        string name;
        float time;
        int recent_chapter;
    };

    struct STUDENT students[100000];
    students[0].name = "1416770";
    students[0].time = 43.0;
    students[0].recent_chapter = 2914;

    struct DATE
    {
        int year, month, day;
    };

    DATE date_of_birth;
    date_of_birth.day = 6;
    date_of_birth.month = 4;
    date_of_birth.year = 2008;
 
    return 0;
}
