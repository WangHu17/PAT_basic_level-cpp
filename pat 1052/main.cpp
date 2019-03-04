#include <iostream>

using namespace std;

int main()
{
    string hand,eye,mouth;
    getline(cin,hand);
    getline(cin,eye);
    getline(cin,mouth);
    string a[11],b[11],c[11];
    int a1=0,a2=0,a3=0;
    for(int i=0;i<hand.size();i++)
    {
        if(hand[i]!='[' && hand[i]!=' ' && hand[i]!=']')
            a[a1]+=hand[i];
        if(hand[i]==']')
            a1++;
    }
    for(int i=0;i<eye.size();i++)
    {
        if(eye[i]!='[' && eye[i]!=' ' && eye[i]!=']')
            b[a2]+=eye[i];
        if(eye[i]==']')
            a2++;
    }
    for(int i=0;i<mouth.size();i++)
    {
        if(mouth[i]!='[' && mouth[i]!=' ' && mouth[i]!=']')
            c[a3]+=mouth[i];
        if(mouth[i]==']')
            a3++;
    }
    int k,s[5];
    cin>>k;
    int flag[k]={0};
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>s[j];
        }
        if(s[0]<1 || s[0]>a1) flag[i]=1;
        if(s[1]<1 || s[1]>a2) flag[i]=1;
        if(s[2]<1 || s[2]>a3) flag[i]=1;
        if(s[3]<1 || s[3]>a2) flag[i]=1;
        if(s[4]<1 || s[4]>a1) flag[i]=1;
        if(flag[i]==1)
            cout<<"Are you kidding me? @\\/@"<<endl;
        else
        {
            cout<<a[s[0]-1]<<"(";
            cout<<b[s[1]-1];
            cout<<c[s[2]-1];
            cout<<b[s[3]-1]<<")";
            cout<<a[s[4]-1]<<endl;
        }
    }
    return 0;
}
