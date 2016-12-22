#include <iostream>

using namespace  std;

int main(void)
{
	int n; cin>>n;
	int *array = new int [n];
	for(int i=0;i<n;i++)
		cin>>array[i];
	int t; cin>>t;
	for(int i=0;i<n;i++)
	{
		if(array[i]==t)
		{
			cout<<i+1<<endl;
			break;
		}
	}

	delete[] array;	
	return 0;
}