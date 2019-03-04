#include<stdio.h>
#define CLK_TCK 100
int main()
{
    int c1,c2,s,f,m,t;
    scanf("%d%d",&c1,&c2);
    t=(0.5+(double)(c2-c1)/CLK_TCK);
    s=(int)(t/3600);
    f=(int)((t%3600)/60);
    m=(int)(t%60);
    printf("%02d:%02d:%02d",s,f,m);
    return 0;
}
