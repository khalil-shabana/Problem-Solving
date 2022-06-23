#include <iostream>
using namespace std;

int main()
{
	double A, B, C, D, result1, result2;
	cin >> A >> B >> C >> D;
	result1 = B * log(A);
	result2 = D * log(C);

	(result1 > result2) ? cout << "YES" : cout << "NO";	
	return 0;
}