#include<stdio.h>
#include<string.h>

void CountingSort(int arr[],int n)
{

    int max=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    int output[n];
    int count[max+1];

    memset(count, 0, sizeof(count));

    /*for ( int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }*/

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }


    for(int i=1; i<=max; i++)
    {
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }


    for(int i=0; i<n; i++)
    {
        arr[i]=output[i];
    }

}



int main()
{
    int arr[]= {1,0,4,0,7,6,1,2,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    CountingSort(arr,n);

    for ( int i = 1; i <=n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
