#include <stdio.h>
int main()
{
    int n,k,score,temp;
    scanf("%d",&n);
    int a[101]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score);
        a[score]++;
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&temp);
        printf("%d",a[temp]);
        if(i<k-1)
            printf(" ");
    }
    return 0;
}
