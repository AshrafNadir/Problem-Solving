#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    char s[105];
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
    }
    sort(s,s+n);
    //cout<<s<<endl;

    for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
            c++;
    }
    if(c==25)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
