#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,res;
    cin>>n;

    if(n%2==0)
    {
        res=(n/2);
    }
    else
    {
        res=((n/2)+1);
        res=(-1)*res;
    }

    cout<<res<<endl;


    return 0;
}
