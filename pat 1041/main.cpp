#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    int b[n],c[n];
    string a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    scanf("%d",&m);
    int d[m];
    for(i=0;i<m;i++)
    {
        cin>>d[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[i]==b[j])
            {
                cout<<a[j]<<' '<<c[j]<<endl;
            }
        }
    }
    return 0;
}
