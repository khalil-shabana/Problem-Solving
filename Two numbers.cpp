
#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cin >> x>> y;

    cout << "floor " << x << " / " << y << " = " << floor(x / y)<<"\n"
        << "ceil " << x << " / " << y << " = " << ceil(x / y) << "\n"
        << "round " << x << " / " << y << " = " << round(x / y);
}
