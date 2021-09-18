#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],cnt=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1] > 1 )
            {
                cnt=1;
                break;
            }

        }
        if(cnt==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
