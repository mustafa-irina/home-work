#include <iostream>

using namespace std;

int main()
{
	cout << "enter \"a\" and \"b\"\n";
	int a = 0;
	int b = 0;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << " b = " << b;
    return 0;
}

