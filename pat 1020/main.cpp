#include <cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct YB{
    float num,price,average;
};
int cmp(YB a,YB b)
{
    return a.average>b.average;
}
int main()
{
    int N,D,i;
    scanf("%d%d",&N,&D);
    YB a[N];
    for(i=0;i<N;i++)
        scanf("%f",&a[i].num);
    for(i=0;i<N;i++)
        scanf("%f",&a[i].price);
    for(i=0;i<N;i++)
        a[i].average=a[i].price/a[i].num;
    sort(a,a+N,cmp);
    float result=0.0;
    for(i=0;i<N;i++)
    {
        if(a[i].num<=D)
            result=result+a[i].price;
        else
        {
            result=result+a[i].average*D;
            break;
        }
            D=D-a[i].num;
    }
    printf("%.2f",result);
    return 0;
}
