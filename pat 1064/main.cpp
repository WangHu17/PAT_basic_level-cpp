#include<stdio.h>
int main()
{
    int n,i,j,m=0;
    scanf("%d",&n);
    int a[n],b[n];
    int k=n;
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            b[i]+=a[i]%10;
            a[i]/=10;
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(b[j]<b[j-1])
            {
                int temp=b[j];
                b[j]=b[j-1];
                b[j-1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j]&&b[i]!=0)
            {
                b[j]=0;
                k--;
            }
        }
    }
    printf("%d",k);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("%d",b[i]);
            m++;
            if(m<k)
            printf(" ");
        }

    }
    return 0;
}
