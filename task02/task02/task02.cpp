#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;

    cin >> number;

    int dot = number.find('.');

    int first = number[dot + 1] - '0';
    int second = number[dot + 2] - '0';

    cout << first + second;

    return 0;
}