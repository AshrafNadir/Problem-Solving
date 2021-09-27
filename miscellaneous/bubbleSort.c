#include<stdio.h>

void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void print(int a[], int n)
{
    int k;
     for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}



int main()
{
    int a[]={10,40,20,50,30};
    int n=sizeof(a)/sizeof(a[0]);

    bubbleSort(a,n);

    print(a,n);
    return 0;
}
