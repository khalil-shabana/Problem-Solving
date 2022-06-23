#include <iostream>
using namespace std;

int main()
{
   unsigned int a,b,c,d;
    cin >> a >> b >> c >> d;
    int result = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    result < 9 ? cout << "0" << result : cout << result;
    

}