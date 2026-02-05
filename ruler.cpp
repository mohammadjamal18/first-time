
#include <iostream>
using namespace std;
int main()
{
    int x = 100, y;
    cout << "please insert a value to y in milemeter under than 100:";
    cin >> y;
    if (y > 100)
    {
    cout << "please insert a value to y in milemeter under than 100:";
    cin >> y;
    }
    cout << endl << endl;
    for (int i = 0; i <= x; i++)
    {
        if (i % 10 != 0)
            cout << ".";
        if (i % 10 == 0)
            cout << "|";

    }
    cout << endl;
    for (int i = 0; i <= x; i++)
    {
        if (i % 10 != 0)
            cout << " ";
        if (i % 10 == 0)
            cout << i / 10;

    }
    cout << endl;
    for (int i = 0; i <= x; i++)
    {
        if (i < y)
            cout << ".";
        if (i == y)
            cout << "|";

    }
    cout << endl;
    for (int i = 0; i <= x; i++)
    {
        if (i < y)
            cout << " ";
        if (i == y)
            cout << y/10.0;

    }
    return 0;
}