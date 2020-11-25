#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a,b,c;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='+')
            a=i;
        else if(s[i]=='=')
            b=i-(a+1);
    }
    c=s.size()-(a+b+2);

    //cout<<a<<" "<<b<<" "<<c<<endl;



    if(a+b==c)
    {
        cout<<s<<endl;

    }

    else if((a+b)+2 == c )
    {


        string ans;
        for(int i = 0; i <a+1 ; i++)
        {
            ans += '|';
        }
        ans += '+';
        for(int i = 0; i < b ; i++)
        {
            ans += '|';
        }
        ans += '=';
        for(int i = 0; i < c-1 ; i++)
        {
            ans += '|';
        }

        cout << ans<<endl;

    }

    else if(((a+b) == c+2 ) && b>1)
    {
        //cout<< "chilam";
            string ans;
            for(int i = 0; i < a; i++)
            {
                ans += '|';
            }
            ans += '+';
            for(int j = 0; j < b-1 ; j++)
            {
                ans += '|';
            }
            ans += '=';
            for(int k = 0; k < c+1 ; k++)
            {
                ans += '|';

            }
             cout <<ans <<endl;

    }

    else if(((a+b) == c+2 ) && a>1)
        {
            string ans;
            for(int i = 0; i < a-1; i++)
            {
                ans += '|';
            }
            ans += '+';
            for(int j = 0; j< b ; j++)
            {
                ans += '|';
            }
            ans += '=';
            for(int k = 0; k < c+1 ; k++)
            {
                ans += '|';
            }

            cout << ans<<endl;
        }

    else
        {

        cout<<"Impossible"<<endl;

        }

    return 0;
}
