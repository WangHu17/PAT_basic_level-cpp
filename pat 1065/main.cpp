#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,m,i;
    int p1,p2;
    int p[100000][3];
    int count=0;
    int flag=0;
    int max=0;
    int member;

    for(i=0;i<100000;i++)
    {
        p[i][0]=-1;
        p[i][1]=0;
        p[i][2]=0;
    }

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p1>>p2;
        p[p1][0]=p2;
        p[p2][0]=p1;
    }

    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>member;
        if(max<member)
            max=member;
        p[member][1]=1;
        int ant=p[member][0];
        if(ant==-1)
            continue;
        if(p[ant][1]==1)
        {
            p[ant][2]=1;
            p[member][2]=1;
            count+=2;
        }
    }

    cout<<m-count<<endl;
    for(i=0;i<=max;i++)
    {
        if(p[i][1]==1&&p[i][2]==0)
        {
            if(flag==0)
                cout<<setfill('0')<<setw(5)<<i;
            else
                cout<<" "<<setfill('0')<<setw(5)<<i;
            flag=1;
        }
    }
    return 0;
}
