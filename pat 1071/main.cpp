#include <iostream>

using namespace std;

int main()
{
    int T,K;
    cin>>T>>K;
    int n1[K],b[K],t[K],n2[K];
    for(int i=0;i<K;i++)
    {
        cin>>n1[i]>>b[i]>>t[i]>>n2[i];
    }
    for(int i=0;i<K;i++)
    {
        if(t[i]>T)
            cout<<"Not enough tokens.  "<<"Total = "<<T<<"."<<endl;
        else if((b[i]==0 && n2[i]<n1[i])||(b[i]==1 && n2[i]>n1[i]))
        {
            T+=t[i];
            cout<<"Win "<<t[i]<<"!  "<<"Total = "<<T<<"."<<endl;
        }
        else
        {
            T-=t[i];
            cout<<"Lose "<<t[i]<<".  "<<"Total = "<<T<<"."<<endl;
        }
        if(T==0)
        {
            cout<<"Game Over."<<endl;
            break;
        }
    }
    return 0;
}
