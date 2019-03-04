#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    string a;
    int q[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int m[11]={1,0,10,9,8,7,6,5,4,3,2};
    cin>>n;
    int flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        int b[18],sum=0,z=0;
        for(j=0;j<17;j++)
        {
            b[j]=a[j]-'0';
            sum+=b[j]*q[j];
        }
        z=sum%11;
        if(a[17]=='X')
            b[17]=10;
        else
            b[17]=a[17]-'0';
        if(m[z]!=b[17])
        {
            flag=1;
            for(int k=0;k<17;k++)
            {
                cout<<a[k];
            }
            if(b[17]!=10)
                cout<<b[17]<<endl;
            else
                cout<<"X"<<endl;
        }
    }
    if(flag==0)
        printf("All passed");
    return 0;
}
