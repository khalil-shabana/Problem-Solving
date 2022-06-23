#include <iostream>
using namespace std;
int main()
{
	char s;
	int a, b;
	cin >> a >> s >> b;
	switch (s)
	{
	case '<':
		(a < b) ? cout << "Right" : cout << "Wrong";
		break;

	case '>':
		(a > b) ? cout << "Right" : cout << "Wrong";
		break;

	case '=':
		(a == b)? cout << "Right" :cout << "Wrong";
		break;
	}
}