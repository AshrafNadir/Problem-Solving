#include<stdio.h>

int main()
{
    int x[10]={7,1,5,3},y,*p,*q,*r;

    p=x;q=&y;
    printf("*p=%d *q=%d \n",*p,*q);
    *q= *(x+4);
    printf("*q=%d \n",*q);
    r=++p;
    printf("*r=%d\n",*r);
    (*p)++;r--;
    printf("*p=%d *r=%d\n",*p,*r);
    *q=(*p<<3)-1;
    printf("*q=%d\n",*q);
    y=*p+*q+*r+*(r+4);
    printf("y=%d\n",y);

    r+=4;
    printf("r=%d\n",r);
    q=p;
    printf("*q=%d\n",*q);
    *r=*q+13-*(p-1);
    printf("*r=%d\n",*r);
    if(q==x+1)
        p=&y;
        printf("*p=%d\n",*p);
    printf("%d %d %d %d %d %d \n ", *x,*p,*q,*r,*(x+4),y);



    return 0;
}
