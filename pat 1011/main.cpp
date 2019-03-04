#include <cstdio>
int main()
{
    int T;
    scanf("%d",&T);
    long long int A,B,C;
    for(int i=0;i<T;i++)
    {
        scanf("%lld%lld%lld",&A,&B,&C);
        printf("Case #%d: %s\n",i+1,A+B>C?"true":"false");
    }
    return 0;
}
