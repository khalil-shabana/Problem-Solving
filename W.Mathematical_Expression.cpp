#include <iostream>
using namespace std;
int main()
{
	char s,q;
	 int a, b,c;

	cin >> a >> s >> b >> q >> c;
	switch (s)
	{
	case '+':
		((a + b) ==c) ? cout << "Yes" : cout << a + b;
		break;

	case '-':
		((a - b) ==c) ? cout << "Yes" : cout << a - b;
		break;

	case '*':
		((a* b) ==c) ? cout << "Yes" : cout << a * b;
		break;
	}
}