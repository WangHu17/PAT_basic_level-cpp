#include <stdio.h>
int main()
{
    int A,B,C,D,n=0;
    scanf("%d%d%d",&A,&B,&D);
    C=A+B;
    int a[50];
    do
    {
        a[n++]=C%D;
        C/=D;
    }while(C!=0);
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
