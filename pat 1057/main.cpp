#include <stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    memset(a,'\0',sizeof(a));
    gets(a);
    int len=strlen(a);
    int i,sum=0,k,j=0,b[100];
    memset(b,0,sizeof(b));
    for(i=0;i<len;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        a[i]-=32;
    }
    for(i=0;i<len;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            sum+=a[i]-64;
    }
    while(sum!=0)
    {
        k=sum%2;
        b[j]=k;
        j++;
        sum/=2;
    }
    int l=0,y=0;
    for(i=0;i<j;i++)
    {
        if(b[i]==0)
            l++;
        if(b[i]==1)
            y++;
    }
    printf("%d %d",l,y);
    return 0;
}
