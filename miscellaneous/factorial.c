#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

int main()
{
    int n=7;
    int sum=fact(16);
    printf("%d\n",sum);

    return 0;
}
