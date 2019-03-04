#include <stdio.h>
#include<math.h>
int main()
{
    int n,x,i,j;
    char ch;
    scanf("%d %c",&n,&ch);
    x=(int)sqrt((n+1)/2);
    int h=x*2-1;
    int l=x;
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<h;j++)
            printf("%c",ch);
        printf("\n");
        h=h-2;
    }
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<l-2;j++)
            printf(" ");
        l--;
        for(j=0;j<2*(i+1)+1;j++)
            printf("%c",ch);
        printf("\n");
    }
    printf("%d\n",n-(2*x*x-1));
    return 0;
}
