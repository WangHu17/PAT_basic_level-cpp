#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],c[100],d[100],m=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==a[i]+c[i] && d[i]!=a[i]+c[i])
            m++;
        else if(d[i]==a[i]+c[i] && b[i]!=a[i]+c[i])
            k++;
    }
    printf("%d %d",k,m);
    return 0;
}
