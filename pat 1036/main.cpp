#include<stdio.h>
int main()
{
    int n,i,j,m;
    char ch;
    scanf("%d %c",&n,&ch);
    for(i=0;i<n;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
    m=n/2;
    if(n%2!=0)
        m+=1;
    for(i=0;i<m-2;i++)
    {
        printf("%c",ch);
        for(j=0;j<n-2;j++)
            printf(" ");
        printf("%c",ch);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}
