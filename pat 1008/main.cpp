#include <stdio.h>
int main()
{
    int a[100],n,m,i,k=0;
    scanf("%d%d",&n,&m);
    m=m%n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-m;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    for(i=0;i<n-m;i++)
    {
        printf("%d",a[i]);
        k++;
        if(k<n-m)
            printf(" ");
    }
    return 0;
}
