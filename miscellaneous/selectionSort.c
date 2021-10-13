#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int a[], int n)
{
    int i,j,min;

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {

            if(a[j]<a[min])
            {
                min=j;
            }

        }

          swap(&a[i],&a[min]);
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
    int a[]={9,8,3,5,7,1,5,10};

    int n=sizeof(a)/sizeof(a[0]);

    selectionSort(a,n);

    print(a,n);


    return 0;
}
