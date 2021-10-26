
#include <stdio.h>
#define SZ 5+6
#define SZ2 9-SZ+SZ
int main()
{
int N = (~(~((12*SZ2*2)<<2)-1))%366;
printf("%010o\n",++N+6);
return 0;
}
