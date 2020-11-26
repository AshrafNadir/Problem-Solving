#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10],s2[10],s3[100];

    scanf("%s + %s = %s",s1,s2,s3);
    int i,j,k;
    i=strlen(s1);
    j=strlen(s2);
    k=strlen(s3);
    if((i+j > (2*k)) || (k > (2*(i+j))))
        printf("Impossible");
    else if(i+j==k)
        printf("%s+%s=%s",s1,s2,s3);

    return 0;
}
