#include<stdio.h>
int main()
{
    char a[1000];
    int i,n[10];
    gets(a);
    for(i=0;i<10;i++)
    {
        n[i]=0;
    }
    i=0;
    while(a[i]!='\0')
    {
        switch(a[i])
        {
            case '0':n[0]++;break;
            case '1':n[1]++;break;
            case '2':n[2]++;break;
            case '3':n[3]++;break;
            case '4':n[4]++;break;
            case '5':n[5]++;break;
            case '6':n[6]++;break;
            case '7':n[7]++;break;
            case '8':n[8]++;break;
            case '9':n[9]++;break;
        }
        i++;
    }
    for(i=0;i<10;i++)
    {
        if(n[i]!=0)
         {
             printf("%d:%d\n",i,n[i]);
         }
    }
    return 0;
}
