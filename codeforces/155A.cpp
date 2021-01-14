/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,low,high,cnt=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //b[i]=a[i];
    }
    //sort(a,a+n);
    if(a[0]>a[1])
    {
        high=a[0];
        low=a[1];
    }
    else
    {
        low=a[0];
        high=a[1];
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            if(a[i+1]<low)
            {
                cnt++;
                low=a[i+1];
            }
        }
        else if(a[i]<a[i+1])
        {
            if(a[i+1]>high)
            {
                cnt++;
                high=a[i+1];
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxx=a[0];
    int minn=a[0];
    for(i=0;i<n;i++){
        if(a[i]>maxx){
            maxx=a[i];
            cnt++;
        }
        if(a[i]<minn){
           minn=a[i];
           cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
