//136A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[110];

    cin>>n;
    int x[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }

    for(int i=0; i<n; ++i)
    {
        a[x[i]]=i+1;
    }
    for(int i=1; i<=n; ++i)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
