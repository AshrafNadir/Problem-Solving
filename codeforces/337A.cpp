//337A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0;

    cin>>n>>m;
    int a[m];

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);

    int minimum=a[n-1]-a[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (a[i+n-1] - a[i] < minimum)
        {
            minimum = a[i+n-1] - a[i];
        }
    }

    cout<<minimum<<endl;


    return 0;
}
