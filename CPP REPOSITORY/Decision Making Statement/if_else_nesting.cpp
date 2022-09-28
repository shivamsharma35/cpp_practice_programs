// Program to illustrate if else nesting in cpp

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int i = 10;

    if (i == 10)
    {

        if (i < 15)
            cout << "i is smaller than 15\n";
        if (i < 12)
            cout << "i is smaller than 12";
        else
            cout << "i is greater than 10";
    }

    return 0;
}