#include <iostream>
using namespace std;

int main()
{
    unsigned short int x;
    cin >> x;
    if (x == 999)
        cout << "ODD";
    else if (1000 <= x <= 9999)
    {
        ((x / 1000) % 2 == 0) ? cout << "EVEN" : cout << "ODD";

    }
}