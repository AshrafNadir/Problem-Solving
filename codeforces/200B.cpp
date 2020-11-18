#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,cnt=0;
    float res;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>l;
        cnt +=l;
    }
    res=(float)cnt/n;

    cout<<res<<endl;

    return 0;
}
