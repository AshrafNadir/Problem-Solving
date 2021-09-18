#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter the row and column of a :");
    scanf("%d %d",&r1,&c1);

    printf("Enter the row and column of b :");
    scanf("%d %d",&r2,&c2);
    //r1=r2=c1=c2=10;

    printf("Enter the elements of a :\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    printf("Enter the elements of b :\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
            //printf("\n");
        }
    }


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][i];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    printf("matrix a : \n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
           printf("%d ",a[i][j]);

        }
        printf("\n");

    }
    printf("\n");
    printf("matrix b : \n");

    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
           printf("%d ",b[i][j]);

        }
        printf("\n");

    }

     printf("\n");
    printf("The result c is :\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            //printf("b[%d][%d]=",i,j);
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }

    return 0;
}
