//344A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1;

    cin>>n;

    int m[n];

    for(int i=0; i<n; i++)
    {
        cin>>m[i];
    }
    for(int i=1; i<n; i++)
    {
        if(m[i] !=m[i-1])
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
