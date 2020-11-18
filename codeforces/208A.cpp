#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n, m, t, p, cas=1;
    char s[100000];
    m=0;
    scanf("%s", &s);
    p=strlen(s);
    for( i=0; i<p; i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i+1<p && i+2<p)
        {
            if(i+2==p-1)
                break;
            i+=2;
            if(m==1)
            {
                cout << " ";
                m=0;
            }
            continue;
        }
        else
        {
            cout << s[i];
            m=1;
        }
    }
    cout << endl;
    return 0;
}
