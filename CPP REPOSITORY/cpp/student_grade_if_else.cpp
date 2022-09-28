// program assign grades to student according to marks

#include <iostream>
using namespace std;
int main()
{
    int  marks;

    cout << "Enter Marks";
    cin >> marks;
    if ((marks >= 90)&&(marks <= 100))
    {
        cout << " A grade";
    }
    else if (marks >= 80)
    {
        cout << "B grade";
    }
    else if (marks >= 70)
    {
        cout << "C grade";
    }

    else if (marks >= 60)
    {

        cout << "Repeat this class this mate ";
    }
    else
    {
        cout << "learn typing first";
    }
    return 0;
}