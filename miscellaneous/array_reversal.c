#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);
    int A[n],B[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",A[i]);
    }

    int l=n;
    for(int j=0;j<n;j++)
    {
        B[l-1]=A[j];
        l=l-1;
    }

    for(int k=0;k<n;k++)
    {
        printf("%d ",B[k]);
    }


    return 0;
}
