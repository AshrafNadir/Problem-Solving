#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;

    cin>>n;
    if(n>=100)
    {
        cnt+=n/100;
        n-=(n/100)*100;
    }
    if(n>=20 && n<100)
    {
        cnt+=n/20;
        n-=(n/20)*20;
    }
    if(n>=10 && n<20)
    {
        cnt+=n/10;
        n-=(n/10)*10;
    }
    if(n>=5 && n<10)
    {
        cnt+=n/5;
        n-=(n/5)*5;
    }
    cnt+=n;

    cout<<cnt<<endl;

    return 0;
}

