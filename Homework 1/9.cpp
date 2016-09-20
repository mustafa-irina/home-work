#include <iostream>

using namespace std;

int main()
{
	bool x[10000];
	memset(x, 0, 10000);
	int n = 0;
	cout << "enter the number\n";
	cin >> n;
	for (int i = 2; i <= n; i++)
		if (!x[i])
		{
			cout << i << ' ';
			for (int j = 2 * i; j <= n; j += i)
				x[j] = true;
		}
	return 0;
}