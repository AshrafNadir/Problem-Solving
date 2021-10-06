#include<stdio.h>

int fibonacci(int n)
{
    int f1=0,f2=1;

    if(n<1)
        return;
    printf("%d ",f1);


    for(int i=0; i<n; i++)
    {
        printf("%d ",f2);
        int next=f1+f2;
        f1=f2;
        f2=next;
    }

}

int main()
{
    fibonacci(7);
    return 0;
}
