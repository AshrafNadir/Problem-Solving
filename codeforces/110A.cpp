//110A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0;
    char n[20];

    cin>>n;


    for(int i=0; i<strlen(n); i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            cnt++;
        }
    }

    if(cnt==4 || cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    //cout<<cnt<<endl
    return 0;
}
