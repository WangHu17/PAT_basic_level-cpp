#include <iostream>
#include<math.h>
using namespace std;

bool prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,i,k=0,num=0;
    cin>>n;
    int a[n]={0};
    for(i=2;i<=n;i++)
    {
        if(prime(i))
            a[k++]=i;
    }
    for(int i=1;i<k;i++)
    {
        if(a[i-1]+2==a[i])
            num++;
    }
    cout<<num;
    return 0;
}
