//266A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,countA=0;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            countA ++;
        }

    }

    cout<<countA<<endl;

    return 0;
}
