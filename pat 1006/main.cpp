#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n/100>0)
    {
        for(i=0;i<n/100;i++)
            printf("B");
    }
    if((n%100)/10>0)
    {
        for(i=0;i<(n%100)/10;i++)
        printf("S");
    }
    if(n%10>0)
    {
        for(i=0;i<n%10;i++)
            printf("%d",i+1);
    }
    return 0;
}
