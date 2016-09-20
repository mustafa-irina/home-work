#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int k = 0;
	cout << "enter the number of array elements\n";
	int n = 0;
	cin >> n;
	cout << "enter elements array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 0)
			k++;
	}
	cout << "the number of zero elements in the array " << k;
	return 0;
}