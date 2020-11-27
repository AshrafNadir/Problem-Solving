//479A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,res1,res2,res3,res4;

    cin>>a>>b>>c;

    res1=a*(b+c);
    res2=(a+b)*c;
    res3=(a+b+c);
    res4=(a*b*c);

    if(res1>=res2 && res1>=res3 && res1>=res4)
        cout<<res1<<endl;
    else if(res2>=res1 && res2>=res3 && res2>=res4)
        cout<<res2<<endl;
    else if(res3>=res1 && res3>=res2 && res3>=res4)
        cout<<res3<<endl;
    else
        cout<<res4<<endl;

    return 0;
}
