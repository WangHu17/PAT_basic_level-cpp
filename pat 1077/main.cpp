#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int s[n]={0};
    for(int i=0;i<n;i++)
    {
        int g1=0,g2,max=-1,min=m+1,cnt=-2,temp;
        scanf("%d",&g2);
        for(int j=0;j<n-1;j++)
        {
            scanf("%d",&temp);
            if(temp>=0 &&temp<=m)
            {
                if(max<temp)max=temp;
                if(min>temp)min=temp;
                g1+=temp;
                cnt++;
            }
        }
        s[i]=int((((g1-max-min)*1.0/cnt)+g2)/2+0.5);
    }
    for(int i=0;i<n;i++)
        printf("%d\n",s[i]);
    return 0;
}
