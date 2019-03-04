#include<stdio.h>
int main()
{
    int i,j,n,a[10],b[100],k=0,m=0,sum=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[k]=a[i]*10+a[j];
            k++;
        }
    }
    m=k;
    for(k=0;k<m;k++)
    {
        sum+=b[k];
    }
    for(i=0;i<n;i++)
    {
        s+=a[i]*10+a[i];
    }
    sum=sum-s;
    printf("%d",sum);
    return 0;
}
