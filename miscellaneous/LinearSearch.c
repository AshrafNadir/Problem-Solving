#include<stdio.h>

int LinearSearch(int arr[], int n,int x)
{

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }


    return -1;
}

int main()

{
    int arr[]={1,5,8,10,9,11,17};

    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;

    int result=LinearSearch(arr,n,x);

    (result== -1)? printf("Element is not present in array.\n")
                 : printf("Element is present at index %d.\n",result);


    return 0;
}
