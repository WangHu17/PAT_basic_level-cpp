#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a1,b1,c1,d1,a2,b2,c2,d2,cha=0,k1,k2,k3;
    scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
    d1=a1*17*29+b1*29+c1;
    d2=a2*17*29+b2*29+c2;
    cha=d2-d1;
    if(cha<0)
        printf("-");
    cha=abs(cha);
    k1=cha/(17*29);
    k2=(cha-k1*17*29)/29;
    k3=cha-k1*17*29-k2*29;
    printf("%d.%d.%d",k1,k2,k3);
    return 0;
}
