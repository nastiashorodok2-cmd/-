#include <iostream>

using namespace std;

int main()
{
    int day, month;

    cin >> day >> month;

    if (day >= 1 && day <= 31 && month >= 1 && month <= 12)
    {
        cout << "VALID";
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}