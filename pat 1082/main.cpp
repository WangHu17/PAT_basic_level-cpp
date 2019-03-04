#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int N,ID,x,y,d,maxid,maxdis=-1,minid,mindis=20001;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>ID>>x>>y;
        d=x*x+y*y;
        if(d>maxdis)
        {
            maxdis=d;
            maxid=ID;
        }
        if(d<mindis)
        {
            mindis=d;
            minid=ID;
        }
    }
    printf("%04d %04d",minid,maxid);
    return 0;
}
