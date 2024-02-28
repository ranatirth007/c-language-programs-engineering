#include<stdio.h>
int main()
{
    int m,n,j,i,k,a[m][n],b[m][n],c[m][n];
    printf("enter the numbers of rows:");
    scanf("%d",&m);
    printf("enter the numbers of columns:");
    scanf("%d",&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);

        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter element at B[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);

        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {c[i][j]=0;
          for(k=0;k<n;k++)
          { 
            c[i][j]+=a[i][k]*b[k][j];
          }
           

        }
    }
    printf("YOUR ADDED ARRAY IS:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
            

        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}