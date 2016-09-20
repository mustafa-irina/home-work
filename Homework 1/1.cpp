#include <iostream>

using namespace std;

int main() {
	int x = 0;
	cout << "enter x\n";
	cin >> x; 
	int p = x * x;
	cout << "x^4+x^3+x^2+x+1 = " << (p + x) * (p + 1) + 1;
	return 0;
}

