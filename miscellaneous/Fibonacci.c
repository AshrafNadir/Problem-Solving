#include<stdio.h>

int main()
{
    int n,m=0,i,sum=0;
    printf("Enter The Number of terms :");
    scanf("%d",&n);
    printf("Fibonacci Numbers Till %dth Terms Are :",n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",fibonacci(m));
        sum=sum+fibonacci(m);
        m++;
    }
    printf("\n");
    printf("Sum of The Numbers Are : %d",sum);

    return 0;
}

int fibonacci (int n)
{
    if(n==0||n==1)
        return n;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}
