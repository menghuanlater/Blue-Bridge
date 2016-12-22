#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define JUDGE
using namespace std;
const int MAX = 100010;
int flag = 1;
void HextoOct(char *Hex)
{
	int length = strlen(Hex);
	char LASA[MAX] = {'\0'};
	if(length%3==1)
	{
		strcat(LASA,"00");
		length += 2;
	}else if(length%3==2)
	{
		strcat(LASA,"0");
		length += 1;
	}
	strcat(LASA, Hex);
	char Bin[20] = {'\0'};
	char Oct[20] = {'\0'};

	for(int i=0;i<length/3;i++)
	{
		memset(Bin,0,sizeof(Bin));
		memset(Oct,0,sizeof(Oct));
		for(int j=0;j<3;j++)
		{
			switch(*(LASA+3*i+j))
			{
				case '0':strcat(Bin,"0000");break;
				case '1':strcat(Bin,"0001");break;
				case '2':strcat(Bin,"0010");break;
				case '3':strcat(Bin,"0011");break;
				case '4':strcat(Bin,"0100");break;
				case '5':strcat(Bin,"0101");break;
				case '6':strcat(Bin,"0110");break;
				case '7':strcat(Bin,"0111");break;
				case '8':strcat(Bin,"1000");break;
				case '9':strcat(Bin,"1001");break;
				case 'A':strcat(Bin,"1010");break;
				case 'B':strcat(Bin,"1011");break;
				case 'C':strcat(Bin,"1100");break;
				case 'D':strcat(Bin,"1101");break;
				case 'E':strcat(Bin,"1110");break;
				case 'F':strcat(Bin,"1111");break;
				default:break;
			}
		}
		int temp = 0;
		for(int k=0;k<4;k++)
		{
			temp = 0;
			for(int l=0;l<3;l++)
			{
				temp <<=1;
				temp += *(Bin+3*k+l) - '0'; 
			}
			Oct[k] = '0'+temp;
		}
		if (flag)
		{
			for (int k = 0; k < 4; k++)
			{
				if (Oct[k] != '0')
				{
					flag = 0;
					cout << Oct[k];
				}
				else if (flag == 0)
					cout << Oct[k];
			}
		}
		else
			cout << Oct;
		flag = 0;
	}
	cout<<endl;
}

int main(void)
{
#ifdef JUDGE
	freopen("data.txt","r",stdin);
#endif
	int n;  (cin >> n).get();
	char Hex[MAX] = {'\0'};    

	for(int i=0;i<n;i++)
	{
		cin.getline(Hex,MAX);
		HextoOct(Hex);
		flag = 1;
	}

    return 0;
}
