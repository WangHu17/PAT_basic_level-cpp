#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N,D;
    double e,E;
    cin>>N>>e>>D;
    int x1=0,x2=0;
    int k;
    for(int i=0;i<N;i++)
    {
        int a=0;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>E;
            if(E<e)
                a++;
        }
        if(a>(k/2))
        {
            if(k>D)
            {
                x2++;
            }
            else
                x1++;
        }
    }
    double A,B;
    A=(double)x1/N*100;
    B=(double)x2/N*100;
    printf("%.1lf%% %.1lf%%",A,B);
    return 0;
}
