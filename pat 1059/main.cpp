#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;

bool prime(int n)
{
    if(n<=1)
        return false;
    int s=sqrt(n);
    for(int i=2;i<=s;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,k,ID,a[10000]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ID);
        a[ID]=i+1;
    }
    scanf("%d",&k);
    int b[k]={0};
    for(int i=0;i<k;i++)
    {
        scanf("%d",&ID);
        printf("%04d: ",ID);
        if(a[ID]==0)
        {
            printf("Are you kidding?\n");
            continue;
        }
        if(b[ID]==1)
        {
            printf("Checked\n");
            continue;
        }
        b[ID]=1;
        if(a[ID]==1)
            printf("Mystery Award\n");
        else if(prime(a[ID]))
            printf("Minion\n");
        else
            printf("Chocolate\n");
    }
    return 0;
}
