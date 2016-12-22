#include <iostream>

using namespace std;

int main(void)
{
	int n; cin>>n;
	//find 5
	if(n<=45)
	{
		for(int i=1;i<=9;i++)
		{
			if(2*i>n)
				break;
			for(int j=0;j<=9;j++)
			{
				if(2*i+2*j>n)
					break;
				for(int k=0;k<=9;k++)
				{
					if(2*i+2*j+k>n)
						break;
					//........
					if(2*i+2*j+k==n)
					{
						cout<<i<<j<<k<<j<<i<<endl;
						break;
					}
				}
			}
		}
	}
	//find 6
	for(int i=1;i<=9;i++)
	{
		if(2*i>n)
			break;
		for(int j=0;j<=9;j++)
		{
			if(2*i+2*j>n)
				break;
			for(int k=0;k<=9;k++)
			{
				if(2*(i+j+k)>n)
					break;
				if(2*(i+j+k)==n)
				{
					cout<<i<<j<<k<<k<<j<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
