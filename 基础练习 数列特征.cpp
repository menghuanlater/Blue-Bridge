#include <iostream>
#define IFINITY 65535
using namespace std;

int main(void)
{
	int n; cin>>n;
	int *array = new int [n];
	for(int i=0;i<n;i++)
		cin>>array[i];

	int min = IFINITY;
	int max = 0-IFINITY;
	int sum = 0;

	for(int i=0;i<n;i++)
	{
		if(array[i]>max)
			max = array[i];
		if(array[i]<min)
			min = array[i];
		sum += array[i];
	}
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<sum<<endl;

	delete[] array;
	return 0;
}