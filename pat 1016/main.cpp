#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,Da,a=0,B,Db,b=0,Pa=0,Pb=0,i=0,sum=0;
    cin>>A>>Da>>B>>Db;
    while(A>0)
    {
        if(A%10==Da)
        {
            a++;
        }
        A/=10;
    }
    while(B>0)
    {
        if(B%10==Db)
        {
            b++;
        }
        B/=10;
    }
    for(i=0;i<a;i++)
    {
        Pa+=Da*pow(10,i);
    }
    for(i=0;i<b;i++)
    {
        Pb+=Db*pow(10,i);
    }
    sum=Pa+Pb;
    cout<<sum<<endl;
    return 0;
}
