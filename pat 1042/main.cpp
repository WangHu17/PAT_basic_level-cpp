#include<stdio.h>
int main()
{
    char a[1000];
    int i=0,s[26]={0},max=0,m=0,n;
    scanf("%c",&a[i]);
    while(a[i]!='\n')
    {
        m++;
        if(a[i]>='A'&&a[i]<='Z')
            a[i]+=32;
            i++;
        scanf("%c",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            s[a[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(max<s[i])
        {
            max=s[i];
            n=i;
        }
    }
    printf("%c %d",(char)(n+'a'),s[n]);
    return 0;
}
