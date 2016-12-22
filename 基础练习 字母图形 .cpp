#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void)
{
	int m, n;
	cin >> m >> n;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<i; j++)
		{
			cout.put('A' + i - j);
		}
		for (int j = i; j<n; j++)
			cout.put('A' + j - i);
		cout << endl;
	}
	return 0;
}