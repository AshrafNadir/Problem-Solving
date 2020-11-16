//160A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,arr[101],total=0,count_a=0,c=0;

    cin>>n;

    for(i=0; i<n; ++i)
    {
        cin>>arr[i];
        total +=arr[i];
    }

    total=total/2;
    sort(arr,arr+n);

    for(i=n-1; i>=0; i--)
    {
        c++;
        count_a +=arr[i];

        if(count_a > total)
            break;
    }

    cout<<c<<endl;

    return 0;
}
