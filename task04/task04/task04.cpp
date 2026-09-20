#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int maxValue = a;

    if (b > maxValue)
    {
        maxValue = b;
    }

    if (c > maxValue)
    {
        maxValue = c;
    }

    int minValue = a;

    if (b < minValue)
    {
        minValue = b;
    }

    if (c < minValue)
    {
        minValue = c;
    }

    cout << maxValue << endl;
    cout << minValue;

    return 0;
}