#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    int i,j=0,k=0,len1=s.length();
    if(s[0]=='-')cout<<"-";
    for(i=1;i<len1;i++)
    {
        if(s[i]=='E')
            break;
        k++;
        if(s[i]!='.')
        {
            t[j]=s[i];
            j++;
        }
    }
    int n=0;
    for(i=k+3;i<len1;i++)
    {
        n+=n*10+s[i]-'0';
    }
    if(s[k+2]=='-')
    {
        cout<<"0.";
        for(i=0;i<n-1;i++)
            cout<<'0';
        for(i=0;i<j;i++)
            cout<<t[i];
    }
    if(s[k+2]=='+')
    {
        cout<<t[0];
        for(i=1;i<j&&i<n+1;i++)
            cout<<t[i];
        if(i==j)
        {
            for(int m=0;m<n-j;m++)
                cout<<'0';
        }
        else
        {
            cout<<'.';
            for(int m=i;m<j;m++)
                cout<<t[m];
        }
    }
    return 0;
}
