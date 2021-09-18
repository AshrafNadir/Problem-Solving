<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<t;i++)
    {

            if(360%(180-a[i]) ==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }


    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<t;i++)
    {

            if(360%(180-a[i]) ==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }


    return 0;
}
>>>>>>> 94f89ab5b3c620dd910b93ba827f6c7a19c93b30
