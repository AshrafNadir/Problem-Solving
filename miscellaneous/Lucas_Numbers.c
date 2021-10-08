#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,a=2,b=1,c;
printf("How many Number Input\n");
scanf("%d",&n);
for(; b<=n;)
{
printf("%d ",a);
c=a+b;
a=b;
b=c;
}
return 0;
}

/*
int lucas(int m)
{
    if(m==0)
        return 2;
    if(m==1)
        return 1;

    return (lucas(m-1)+lucas(m-2));
}

int main()
{
    int n,a=2,b=1,c;
    printf("How many Number Input\n");
    scanf("%d",&n);


    printf("%d ",lucas(n-1));

    return 0;
}
*/
