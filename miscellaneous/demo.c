#include <stdio.h>
#define CSE 4+6
#define SUST 9-CSE+CSE
int main()
{
int p = 1;
int N = (~(~((12*SUST*2)<<2)-p))%420;
printf("%d",N);
printf("%010X\n",++N+10);
return 0;
}
