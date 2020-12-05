#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,cnt=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>l;
        cnt +=l;
    }
    if(cnt==0)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }


    return 0;
}
