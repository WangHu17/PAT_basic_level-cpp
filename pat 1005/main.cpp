#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int k,n,i=0,j=0,flag=0;
    cin>>k;
    int b[k]={0};
    int visit[100]={0};
    for(i=0;i<k;i++)
    {
        cin>>n;
        if(visit[n])
            continue;
        b[j++]=n;
        while(n!=1)
        {
            if(n%2!=0)
                n=3*n+1;
            n=n/2;
            visit[n]=1;
        }
    }
    sort(b,b+j,compare);
    for(i=0;i<j;i++)
    {
        if(visit[b[i]]==0)
        {
            if(flag==1)cout<<" ";
            cout<<b[i];
            flag=1;
        }
    }
    return 0;
}
