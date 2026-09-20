#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    if (number % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}