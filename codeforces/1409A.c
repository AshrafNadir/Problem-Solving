#include <stdio.h>

int main()
{
    long long int l,q,a,b;
    int n;

    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%lld %lld", &a,&b);


        if(a==b)
        {
            printf("0\n");

        }
        else if(a<b)
        {
            l=b-a;
            if(l%10==0)
            {
                q=l/10;
            }
            else
            {
                q=(l/10)+1;
            }

            printf("%lld\n",q);


        }
        else if(a>b)
        {
            l=a-b;
            if(l%10==0)
            {
                q=l/10;
            }
            else
            {
                q=(l/10)+1;
            }

            printf("%lld\n",q);

        }


    }

    return 0;
}
