#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,countA=0,total_count=0,capacity;

    cin>>n;
    int s[n];
    for(int i=0; i<n; i++)
    {
        //cout<<a<<" "<<b<<" "<<c<<endl
        cin>>a>>b;
        countA -=a;
        countA +=b;
        total_count +=countA;
        s[i]=total_count;
        countA=0;

    }

    for(int i=1; i<n; ++i)
    {
        //cout<<s[i]<<endl;
        if(s[0]<s[i])
            s[0]=s[i];
    }
    cout<<s[0]<<endl;


    return 0;
}
