#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            s=s+"I hate";
        }

        if(i%2==0)
        {
            s=s+"I love";
        }
        if(i==n)
        {
            s=s+" it ";
        }
        if(i!=n)
        {
            s=s+" that ";
        }
    }


    cout<<s<<endl;


    return 0;
}
