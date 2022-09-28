#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter first numbers : ";
    cin >> a;
    cout << "Enter Second number : ";
    cin >> b;
    if (a > b)
    {
        cout << a;
        if (b > a)
        {
            cout << b;
        }
    }
    else
        cout << "ERROR";
    return 0;
}