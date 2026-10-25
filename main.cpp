#include <iostream>
using namespace std;

int main(void)
{
    struct BIRTH_DATE
    {
        int day;
        int month;
        int year;
    };

    struct PERSON
    {
        string name;
        int age;
        BIRTH_DATE birth_date;
    };

    struct PERSON me = {"1416770", 18, {6, 4, 2008}};
    cout << me.birth_date.year << endl;
 
    return 0;
}
