#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n,cnt=0,total=0;


    cin>>n;
    int s[n];


    for(int i=0; i<n; i++)
    {
        cin>>s[i];

    }

    for(int i=0; i<n-1; i++)
    {
        if(s[i] <= s[i+1])
        {
            cnt++;
        }

        else if(s[i] >  s[i+1])
        {
            if(cnt>total)
            {
                total=cnt;

            }
             cnt=0;
        }
    }

    if(cnt>total)
        total=cnt;
        cout<<total+1<<endl;


    return 0;
}
