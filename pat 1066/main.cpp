#include<stdio.h>
int main()
{
    int m,n,A,B,t,i,j;
    scanf("%d%d%d%d%d",&m,&n,&A,&B,&t);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>=A && a[i][j]<=B)
                a[i][j]=t;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%03d",a[i][j]);
            if(j<n-1)
                printf(" ");
        }
        if(i<m-1)
            printf("\n");
    }
    return 0;
}
