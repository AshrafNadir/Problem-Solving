#include<stdio.h>

void Tower(int n,char s,char a, char d)
{
    if(n==1)
    {
        printf("%c -> %c\n",s,d);
        return;
    }
    Tower(n-1,s,d,a);
    printf("%c -> %c\n",s,d);
    Tower(n-1,a,s,d);

}

int main()
{
    //char s,a,d;
    int n=3;
    Tower(n,'A','B','C');


    return 0;
}
