#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int l, int r, int x)
{
    if(r>=l)
    {
        int m=l+(r-l)/2;

        if(arr[m]==x)
            return m;

        if(arr[m]>x)
            return binarySearch(arr,l,m-1,x);

        return binarySearch(arr,m+1,r,x);

    }
    return -1;
}

int main()
{
    /*int n,x;

    FILE *fp;

    fp=fopen("input.txt","r");

    fscanf(fp,"%d",n);
    int arr[n];

    for(int i=0;i<n-1;i++)
    {
        fscanf(fp,"%d ",arr[i]);
    }

    fscanf(fp,"%d",x);*/
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int x;

    int n=sizeof(arr)/sizeof(arr[0]);

    cin>>x;

    int result=binarySearch(arr,0,n-1,x);

    (result==-1)?cout<<"The number is not present in the array!"
                :cout<<"The number is present at index "<<result ;
    return 0;
}
