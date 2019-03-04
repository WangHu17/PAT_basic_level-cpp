#include <iostream>
#include<string>
using namespace std;

int main()
{
    int p=0,a=0,t=0,result=0;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='T')
            t++;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]=='P')p++;
        if(s[i]=='T')t--;
        if(s[i]=='A')result=(result+(p*t)%1000000007)%1000000007;
    }
    cout<<result;
    return 0;
}
