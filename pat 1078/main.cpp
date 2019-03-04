#include<cstdio>
#include <iostream>
#include<string>
using namespace std;

string a;

void compress()
{
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        int count=1;
        while(a[i]==a[i+1])
            i++,count++;
        if(count!=1)
            cout<<count;
        cout<<a[i];
    }
}

void decomprssion()
{
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        int num=0;
        while(a[i]>='0' && a[i]<='9')
            num+=num*10+a[i++]-'0';
        for(int j=0;j<num;j++)
            cout<<a[i];
        if(num==0)
            cout<<a[i];
    }
}

int main()
{
    char ch;
    cin>>ch;
    getchar();
    if(ch=='C')
        compress();
    else if(ch=='D')
        decomprssion();
    cout<<endl;
    return 0;
}
