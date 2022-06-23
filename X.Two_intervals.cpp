#include <iostream>
using namespace std;
int main()
{
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (r1 >= l2 && r1 < r2 && l2 > l1)
		cout << l2 << " " << r1;
	else if (r1 >= l2 && r1 >= r2 && l2 >= l1)
		cout << l2 << " " << r2;
	else if (r2 >= l1 && r2 >= r1 && l1 >= l2)
		cout << l1 << " " << r1;
	else if (r1>=r2 &&r2>=l1&&l1>=l2)
	{
		cout << l1 << " " << r2;
	}
	
	else
	{
		cout << "-1";
	}
		
}