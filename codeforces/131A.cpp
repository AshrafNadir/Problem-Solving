//131A
#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main()
{
    string s;
    string n;
    bool l=false;
    bool m=false;
    bool p=false;
    int cnt=0,a=0,b=0;

    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        n +=s[i];
    }
    //cout<<n<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            cnt++;
        }

        if(i==0 && islower(s[i]))
        {
            //s[i]=s[i]-32;
            a++;
        }

        if(i !=0 && isupper(s[i]))
        {
            //s[i]=s[i]+32;
            b++;
        }
    }


    if(cnt==s.size())
    {
        for(int i=0; i<cnt; i++)
        {
            s[i]=s[i]+32;
        }
    }


    if((a+b)==s.size())
    {
        for(int i=0; i<s.size(); i++)
        {


            if(i==0 && islower(s[i]))
            {
                s[i]=s[i]-32;
                //a++;
            }

            if(i !=0 && isupper(s[i]))
            {
                s[i]=s[i]+32;
                //b++;
            }

        }
    }



    if((a+b)==s.size() || cnt==s.size())
        cout<<s<<endl;
    else
        cout<<n<<endl;


    return 0;
}
