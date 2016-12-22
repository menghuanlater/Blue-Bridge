#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int **array = new int *[n];
	for (int i = 0; i<n; i++)
		array[i] = new int[n];

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				array[i][j] = 1;
			else
				array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
	}

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i<n; i++)
		delete[] array[i];
	delete[] array;
	return 0;
}