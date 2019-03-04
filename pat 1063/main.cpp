#include<stdio.h>
#include<math.h>
#define N 10000
int main()
{
    int n,a[N],b[N],i;
    double c[N],max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=sqrt(a[i]*a[i]+b[i]*b[i]);
        if(max<c[i])
            max=c[i];
    }
    printf("%.2f",max);
    return 0;
}
