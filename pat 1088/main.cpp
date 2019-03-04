#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,x,y,J,Y,flag=0;
    double B;
    string a,b,c;
    cin>>M>>x>>y;
    for(J=99;J>=10;J--)
    {
        Y=(J%10)*10+J/10;
        B=double(abs(J-Y))/x;
        if(B*y==Y)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"No Solution";
    else
    {
        if(M==J)
            a="Ping";
        else if(M>J)
            a="Gai";
        else
            a="Cong";

        if(M==Y)
            b="Ping";
        else if(M>Y)
            b="Gai";
        else
            b="Cong";

        if(M==B)
            c="Ping";
        else if(M>B)
            c="Gai";
        else
            b="Cong";
        cout<<J<<" "<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
