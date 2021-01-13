#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int min=101,max=0,min_index=0,max_index=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }

        if(a[i]<=min)
        {
            min=a[i];
            min_index=i;
        }

    }

    n=n-1;

    if(max_index>min_index)
        min_index=min_index+1;


    cout<<(max_index+n-min_index)<<endl;

    return 0;
}
