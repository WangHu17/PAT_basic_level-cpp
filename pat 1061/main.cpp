#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],i,j,c[100][100],d[100];
    scanf("%d%d\n",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&c[j][i]);
            if(c[j][i]==b[i])
            {
                d[j]+=a[i];
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d\n",d[j]);
    }
    return 0;
}
