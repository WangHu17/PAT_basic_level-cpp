#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    int c[128]={0};
    int len1=strlen(a);
    int len2=strlen(b);
    int count1=0;
    int count2=len1-len2;
    char ch;
    for(int i=0;i<len1;i++)
    {
        c[a[i]]++;
    }
    for(int i=0;i<len2;i++)
    {
        c[b[i]]--;
        if(c[b[i]]<0)
            count1++;
    }
    if(count1==0)
    {
        printf("Yes %d",count2);
    }
    else
        printf("No %d",count1);
    return 0;
}
