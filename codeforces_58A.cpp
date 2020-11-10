//58A
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,b="hello";
    int j=0,countA=0;
    cin>>s;


    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==b[j])
        {
            j++;
            countA++;

            if(countA==5)
            {
                break;
            }

        }

    }

    if(countA==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
