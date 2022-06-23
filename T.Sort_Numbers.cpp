#include <iostream>
using namespace std;
int main()
{

	int arr[3];
	cin >>arr[0] >> arr[1] >> arr[2]; //3. 2 .1
	int f = arr[0];
	int m = arr[1];
	int l = arr[2];
	for (int i = 0;i < 2;i++)
	{
		for (int j = 1;j < 3;j++)
		{
			if (arr[j] < arr[i]) 
				swap(arr[i], arr[j]);
		}
	}
	cout << arr[0]<<"\n" << arr[1] << "\n" << arr[2]<<endl ;
	cout << "\n" <<f<<"\n" << m << "\n" << l ;

}