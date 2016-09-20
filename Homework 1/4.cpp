#include <iostream>

using namespace std;

int main() 
{
	cout << "enter the dividend\n";
	int a = 0;
	cin >> a;
	cout << "enter divider\n";
	int b = 0;
	cin >> b;
	int i = -1;
	while (a >= 0) 
	{
		a -= b;
		i++;
	}
	cout << "partial quotient = " << i;
	return 0;
}