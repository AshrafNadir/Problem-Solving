#include<stdio.h>

void permute(char *s,int l,int r)
{
    int i;
    if(l==r)
        printf("%s\n",s);
    else
    { 
        for(i=l;i<=r;i++)
        {
            swap((s+l),(s+i));
            permute(s,l+1,r);
            swap((s+l),(s+i));
        }
    }
}

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    char str[]="ABC";
    int n=strlen(str);
    permute(str,0,n-1);

    return 0;
}
