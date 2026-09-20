#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);

    int h;

    cin >> h;

    if (h >= 0 && h < 6)
    {
        wcout << L"Доброї ночі!";
    }
    else if (h >= 6 && h < 12)
    {
        wcout << L"Доброго ранку!";
    }
    else if (h >= 12 && h < 18)
    {
        wcout << L"Добрий день!";
    }
    else
    {
        wcout << L"Добрий вечір!";
    }

    return 0;
}