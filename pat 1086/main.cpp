#include <iostream>

using namespace std;

int main()
{
    int A,B,sum,ans,a[10],i=0,t=0;
    cin>>A>>B;
    sum=A*B;
    while(sum>0)
    {
        a[i++]=sum%10;
        sum/=10;
    }
    for(int j=0;j<i;j++)
    {
        if(a[j]==0)
            t++;
        else
            break;
    }
    for(int j=t;j<i;j++)
    {
        cout<<a[j];
    }
    return 0;
}
