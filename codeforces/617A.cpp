#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n<=5)
    {
        cout<<"1"<<endl;
    }

    else if(n>5)
    {
        int cnt=0;
        cnt +=n/5;
        if(n%5 >0 && n%5< 5)
        {
            cnt +=1;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
