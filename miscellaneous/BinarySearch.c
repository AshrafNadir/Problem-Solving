#include<stdio.h>

int binarySearch(int arr[], int l, int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;

        if(arr[mid]==x)
            return mid;

        if(arr[mid]<x)
            return binarySearch(arr,mid+1,r,x);

        return binarySearch(arr,l,mid-1,x);
    }

    return -1;
}

int main()
{
    int arr[]={1,5,8,10,9,11,17};

    int n=sizeof(arr)/sizeof(arr[0]);
    int x=17;

    int result=binarySearch(arr,0,n-1,x);

    if(result== -1)
         printf("Element is not present in array.\n");
    else
       printf("Element is present at index %d.\n",result);


    return 0;
}



