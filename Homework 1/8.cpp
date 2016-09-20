#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char s[1000];
	char s1[1000];
	cout << "enter the string\n";
	fgets(s, 1000, stdin);
	cout << "enter a substring\n";
	fgets(s1, 1000, stdin);
	int n = strlen(s);
	int m = strlen(s1);
	s1[m - 1] = 0;
	m--;
	int k = 0;
	for (int i = 0; i < n - m + 1; i++)
	{ 
		bool r = false;
		for (int j = i; j < m + i; j++)
			if (s[j] != s1[j - i])
			{
				r = true;
				break;
			}
		if (!r)
			k++;
	}
	cout << k;
	return 0;
}