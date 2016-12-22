#include <iostream>

using namespace std;
//转换为求三个数的最小公倍数
//先利用辗转相除法得到最大公约数
int main(void)
{
    int m,n,q,_m,_n,_q;
    cin>>m>>n>>q;
    _m = m; _n = n; _q = q;
    int c;
    while(n!=0)
    { c = m%n; m = n; n = c ;}
    int sql = (_m*_n)/m;
    int _sql = sql;
    while(q!=0)
    { c=sql%q; sql = q; q = c; }
    cout<<(_sql*_q)/sql<<endl;

    return 0;
}