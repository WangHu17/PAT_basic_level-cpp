#include<cstdio>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int N,n,k;
    cin>>N;
    int p[N]={0};
    for(int i=1;i<=N;i++)
    {
        cin>>n;
        p[abs(n-i)]++;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(p[i]>=2)
            cout<<i<<" "<<p[i]<<endl;
    }
    return 0;
}
