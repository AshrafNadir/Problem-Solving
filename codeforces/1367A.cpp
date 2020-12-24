#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b,a;
        cin>>b;
        int l=b.length();

        a[0]=b[0];
        for(int i=0; i<l-1; i++)
        {
            if(i==0)
            {
                a+=b[i];
            }
            if(b[i]==b[i-1])
            {
                a+=b[i];
                i++;
            }
        }
        a+=b[l-1];
        cout<<a<<endl;

    }


    return 0;
}

