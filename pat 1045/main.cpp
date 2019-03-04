#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[100000],b[100000],z[100000],max=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(b[i]==a[i] && a[i]>max)
            z[cnt++]=a[i];
        if(a[i]>max)
            max=a[i];
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<z[i];
        if(i<cnt-1)
            cout<<" ";
    }
    if(cnt==0)
        cout<<"\n";
    return 0;
}
