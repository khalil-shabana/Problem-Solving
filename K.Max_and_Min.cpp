
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int min, max;
    if (x > y)
    {
        if (x > z)
        {
            max = x;
            (y > z) ? min = z : min = y;

        }
        else
        {
            max = z;
            min = y;
        }
    }
    else if (y > z)
    {
        max = y;
        (x > z) ? min = z : min = x;
    }
    else
    {
        max = z;
        min = x;
    }
    cout << min << " " << max;
}