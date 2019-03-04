#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int c[n];
    for(i=0;i<n;i++)
    {
        char a,b;
        for(j=0;j<8;j++)
        {
            scanf("%c-%c",&a,&b);
            if(a=='A'&&b=='T') c[i]=1;
            else if(a=='B'&&b=='T') c[i]=2;
            else if(a=='C'&&b=='T') c[i]=3;
            else if(a=='D'&&b=='T') c[i]=4;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}

