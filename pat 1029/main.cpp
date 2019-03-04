#include <stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80],c[80];
    memset(a,'\0',sizeof(a));
    memset(b,'\0',sizeof(b));
    memset(c,'\0',sizeof(c));
    gets(a);
    gets(b);
    int flag=0,k=0,i,j;
    int len1=strlen(a);
    int len2=strlen(b);
    for(i=0;i<len1;i++)
    {
        flag=0;
        for(j=0;j<len2;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        if(c[i]>='a'&&c[i]<='z')
            c[i]-=32;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]==c[j])
                c[j]='\0';
        }
    }
    for(i=0;i<k;i++)
    {
        if(c[i]!='\0')
            printf("%c",c[i]);
    }
    return 0;
}
