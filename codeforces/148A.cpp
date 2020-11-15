#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k,l,m,n;
    cin>>k>>l>>m>>n;
    long d;
    cin>>d;
    long total = 0;
    for(int u = 1; u <= d; ++u)
    {
        if( u % k == 0 || u % l == 0 || u % m == 0 || u % n == 0)
        {
            ++total;
        }
    }
    cout<<total<<endl;
    return 0;
}
