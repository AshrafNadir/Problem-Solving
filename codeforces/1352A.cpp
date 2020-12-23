#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        int ans,a, cnt=0;
        vector<int>x;

        cin>>a;
        if(a%10 !=0)
        {
            x.push_back(a%10);
        }
        ans=a%10;
        a-=ans;
        if(a%100 !=0)
        {
            x.push_back(a%100);
        }
        ans=a%100;
        a-=ans;
        if(a%1000 !=0)
        {
            x.push_back(a%1000);
        }
        ans=a%1000;
        a-=ans;
        if(a%10000 !=0)
        {
            x.push_back(a%10000);
        }
        if(a>= 10000 && a%10000==0)
        {
            x.push_back(a);
        }
        cout<<x.size()<<endl;

        for(int i=0; i<x.size(); i++)
        {
            cout<<x[i]<<" ";
        }

    }

    return 0;
}
