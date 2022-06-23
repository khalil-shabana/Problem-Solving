#include <iostream>
using namespace std;

int main()
{
    unsigned int a;
    int y, m, d;
    cin >> a;
    y = a / 365;
    a = a - (365 * y);
    m = a / 30;
    a = a - (m * 30);
    d = a;
    cout << y << " years\n" << m << " months\n" << d << " days";
}

//---------using while loop------------ ;
//      int main()
//      {
//           unsigned int a;
//           int y = 0;
//           int m = 0;
//           int d = 0;
//           cin >> a;
//           while (a >= 365)
//            {
//                y++;
//              a = a - 365;
//            }
//          while (a >= 30)
//            {
//              m++;
//              a = a - 30;
//            }
//          while (a >= 1)
//            {
//              d++;
//              a--;
//            }
//          cout << y << " years\n" << m << " months\n" << d << " days";
//     }