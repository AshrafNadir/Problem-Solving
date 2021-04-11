#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n];


    for(int i=0;i<n;i++)
    {
        cin>>m[i];
    }

    for(int i=0;i<n;i++)
    {
        if(m[i]==1 || m[i]==2)
    {
        cout<<0<<endl;
    }
    else if(m[i]%2==0)
    {
        cout<<(m[i]/2)-1<<endl;
    }
    else if(m[i]%2==1)
    {
        cout<<m[i]/2<<endl;
    }

    }




    return 0;
}
