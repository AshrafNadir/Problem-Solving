#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;

    for(int i=1;  ; i++)
        {
            if(((i*k)%10)-r==0)
            {
                cout<<i<<endl;
                break;
            }
            else if((i*k)%10==0)
            {
                cout<<i<<endl;
                break;
            }
        }


    /*if(k%5 ==0)
    {
        cout<<2<<endl;
    }
    else
    {
        for(int i=1;  ; i++)
        {
            if(((i*k)%10)-r==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    } */

    return 0;
}
