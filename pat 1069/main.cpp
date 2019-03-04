#include<stdio.h>
#include <iostream>
#include<map>
using namespace std;
int main()
{
    int m,n,s;
    scanf("%d%d%d",&m,&n,&s);
    string str;
    map<string,int>mmap;
    if(s>m)
        cout<<"Keep going...";
    for(int i=1;i<=m;i++)
    {
        cin>>str;
        if(mmap[str]==1)
            s++;
        if(i==s && mmap[str]==0)
        {
            mmap[str]=1;
            cout<<str<<endl;
            s+=n;
        }
    }
    return 0;
}
