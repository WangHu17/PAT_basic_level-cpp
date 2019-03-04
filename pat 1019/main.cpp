#include<cstdio>
#include <iostream>
#include<algorithm>
using namespace std;
int p,q;
void jf(int x)
{
    int a[4];
    a[0]=x/1000;
    a[1]=(x/100)%10;
    a[2]=(x/10)%10;
    a[3]=x%10;
    sort(a,a+4);
    p=a[3]*1000+a[2]*100+a[1]*10+a[0];
    q=a[0]*1000+a[1]*100+a[2]*10+a[3];
}
int main()
{
    int N,s;
    scanf("%d",&N);
    do
    {
        jf(N);
        s=p-q;
        printf("%04d - %04d = %04d\n",p,q,s);
        N=s;
    }while(s!=6174 && s!=0);
    return 0;
}
