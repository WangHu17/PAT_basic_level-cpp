#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int num,A1=0,A2=0,A3=0,A5=0,a1=0,a2=0,a3=0,a4=0,a5=0;
    double A4=0.0;
    int temp=1;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        if(num%5==0 && num%2==0)
        {
            a1=1;
            A1+=num;
        }
        else if(num%5==1)
        {
            a2=1;
            A2+=(temp%2!=0)?num:(-1*num);
            temp++;
        }
        else if(num%5==2)
        {
            a3=1;
            A3++;
        }
        else if(num%5==3)
        {
            a4++;
            A4+=num;
        }
        else if(num%5==4)
        {
            a5=1;
            if(num>A5)
                A5=num;
        }
    }
    if(a1!=0)cout<<A1<<" ";else cout<<"N"<<" ";
    if(a2!=0)cout<<A2<<" ";else cout<<"N"<<" ";
    if(a3!=0)cout<<A3<<" ";else cout<<"N"<<" ";
    if(a4!=0)printf("%.1f ",A4/a4);else cout<<"N"<<" ";
    if(a5!=0)cout<<A5;else cout<<"N";
    return 0;
}
