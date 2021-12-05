#include<bits/stdc++.h>

using namespace std;

void mergeA(int arr[], int l,int m, int r)
{
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;

    int a[n1],b[n2];

    for(i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }

     for(j=0;j<n2;j++)
    {
        b[j]=arr[m+1+j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }

        else
        {
           arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1)
    {
       arr[k]=a[i];
            k++; i++;
    }

    while(j<n2)
    {
        arr[k]=b[j];
            k++; j++;
    }


}

void mergeSort(int arr[],int l, int r)
{
    int m;
    if(l<r)
    {
        m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);

        mergeA(arr,l,m,r);
    }
}

void printArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={10,30,100,70,90,50,60,20,40,80};

    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    printArray(arr,n);
}
