#include <iostream>

using namespace std;

void p(int lb, int rb, int x[])
{
	int md = (lb + rb) / 2;
	for (int i = lb; i <= md; i++)
		swap(x[i], x[rb - i + lb]);
}

int main()
{
	int x[1000];
	cout << "enter m\n";
	int m = 0;
	cin >> m;
	cout << "enter n\n";
	int n = 0;
	cin >> n;
	cout << "enter array x\n";
	for (int i = 0; i < m + n; i++)
	{
		cin >> x[i];
	}
	p(0, m - 1, x);
	p(m, n + m - 1, x);
	p(0, n + m - 1, x);
	for (int i = 0; i < m + n; i++)
	{
		cout << x[i] << ' ';
	}
	cin >> n;
	return 0;
}