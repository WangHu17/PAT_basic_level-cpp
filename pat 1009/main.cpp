#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    gets(a);
    int len=strlen(a);
    int h=0,l=0,i;
    char s[80][80];
    for(i=0;i<len;i++)
    {
        if(a[i]!=' ')
        {
            s[h][l++]=a[i];
        }
        else
        {
            s[h][l]='\0';
            h++;
            l=0;
        }
    }
    for(i=h;i>=0;i--)
    {
        printf("%s",s[i]);
        if(i>0)
            printf(" ");
    }
    return 0;
}
