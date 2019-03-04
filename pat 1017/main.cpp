#include <cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string A;
    int B,Q,R;
    cin>>A>>B;
    int len=A.length();
    Q=(A[0]-'0')/B;
    if((Q!=0&&len>1)||len==1)
        printf("%d",Q);
    R=(A[0]-'0')%B;
    for(int i=1;i<len;i++)
    {
        Q=(R*10+A[i]-'0')/B;
        printf("%d",Q);
        R=(R*10+A[i]-'0')%B;
    }
    printf(" %d",R);
    return 0;
}
