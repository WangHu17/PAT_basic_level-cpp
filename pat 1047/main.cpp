#include<stdio.h>
int main()
{
    int n,i,a[1000],num,ID,score,max=0,k;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d-%d%d",&num,&ID,&score);
        a[num]+=score;
    }
    for(i=0;i<1000;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            k=i;
        }
    }
    printf("%d %d",k,max);
    return 0;
}
