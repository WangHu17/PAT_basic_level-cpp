#include <iostream>

using namespace std;

int main()
{
    int n,y[10000]={-1},N=0,j=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        y[j]=int(i/2)+int(i/3)+int(i/5);
        j++;
    }
    for(int i=0;i<n;i++)
    {
        for(int t=i+1;t<n;t++)
        {
            if(y[i]==y[t])
                y[t]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(y[i]!=-1)
            N++;
    }
    cout<<N;
    return 0;
}
