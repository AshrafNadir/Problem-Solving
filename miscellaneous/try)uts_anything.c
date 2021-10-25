#include<stdio.h>

int main()

{
    int x = 8, k = 16;
if(x++==(k>>1) || k-->9) x--;
printf("%2X%2o\n",x,k);
    return 0;
}
