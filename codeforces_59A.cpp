//59A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int i,up=0,down=0;

    cin>>s;
    int l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            down++;
        }
    }

    if(up <= down)
    {
        for(i=0; i<l; i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        }
    }

    else
    {
        for(i=0; i<l; i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
    }

    cout<<s<<endl;
    return 0;
}
