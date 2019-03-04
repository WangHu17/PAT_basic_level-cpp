#include<stdio.h>
int main()
{
    char a[10000];
    int i=0,j,m=0,s[6]={0,0,0,0,0,0};
    gets(a);
    while(a[i]!='\0')
    {
        switch(a[i])
        {
            case 'P':s[0]++;break;
            case 'A':s[1]++;break;
            case 'T':s[2]++;break;
            case 'e':s[3]++;break;
            case 's':s[4]++;break;
            case 't':s[5]++;break;
            default:break;
        }
        i++;
    }
    for(i=0;i<6;i++)
    {
        if(m<s[i])
            m=s[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<6;j++)
        if(s[j])
        {
            s[j]--;
            switch(j)
            {
                case 0:printf("P");break;
                case 1:printf("A");break;
                case 2:printf("T");break;
                case 3:printf("e");break;
                case 4:printf("s");break;
                case 5:printf("t");break;
                default:break;
            }
        }
    }
    printf("\n");
    return 0;
}
