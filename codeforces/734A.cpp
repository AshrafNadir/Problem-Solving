//734A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,A=0,D=0;

    cin>>n;
    char s[n];

    for(int i=0; i<n; i++)
    {
        cin>>s[i];

        if(s[i]=='A')
            A++;
        else
            D++;
    }

    if(A>D)
        cout<<"Anton"<<endl;
    else if(D>A)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;


    return 0;
}
