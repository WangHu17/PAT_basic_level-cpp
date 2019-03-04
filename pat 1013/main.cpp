#include <iostream>

using namespace std;

int main()
{
    int m,n,s[10000],i,j,t=1,h=0,H0=0,H,S;
    s[0]=2;
    for(i=1;i<10000;i++)
    {
        s[i]=0;
    }
    for(i=3;i<=10000;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            if(j==i-1)
                s[t++]=i;
        }
    }
    cin>>m>>n;
    if(n>t)n=t;
    H=int(n-m+1)/10;
    S=(n-m+1)%10;
    for(i=m-1;i<n;i++)
    {
        cout<<s[i];
        h++;
        if(H0<H)
        {
            if(h<10)
                cout<<" ";
            else
            {
                cout<<endl;
                h=0;
                H0++;
            }
        }
        else
        {
            if(h<S)
                cout<<" ";
        }
    }
    return 0;
}
