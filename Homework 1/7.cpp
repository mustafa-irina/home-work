#include <iostream>
#include <stdio.h>

using namespace std;

const int maxN = 1000;

int main()
{
	char s[maxN];
	fgets(s, maxN, stdin);
	int b = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(')
			b++;
		if (s[i] == ')')
				b--;
		if (b < 0) 
		{
			cout << "Incorrect";
			return 0;
		}
	}
	if (b > 0) 
		cout << "Incorrect";
	else 
		cout << "Correct";
	return 0;
}