#include <iostream>

using namespace std;
//1 <= n <= 1,000,000。
int main(void)
{
    int n;
    cin>>n;
    int *F = new int [n+1];
    F[0] = 0;
    F[1] = 1;

    const int MODE = 10007;

    if(n==1)
        cout<<1<<endl;
    else
    {
        for(int i=2;i<=n;i++)
            F[i] = (F[i-1] + F[i-2])% MODE;
        cout<<F[n]<<endl;
    }

    delete[] F;
    return 0;
}