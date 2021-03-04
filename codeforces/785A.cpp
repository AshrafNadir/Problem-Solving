#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    string s;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(s=="Icosahedron")
            cnt+=20;
        else if(s=="Tetrahedron")
            cnt+=4;
        else if(s=="Cube")
            cnt+=6;
        else if(s=="Octahedron")
              cnt+=8;
        else
            cnt+=12;
    }

    cout<<cnt<<endl;

    return 0;
}
