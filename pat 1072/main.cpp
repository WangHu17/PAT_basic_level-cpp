#include<cstdio>
int main()
{
    int f[10000]={0};
    int N,M,num,k,snum=0,nnum=0;
    char name[10];
    scanf("%d%d",&N,&M);
    for(int i=0;i<M;i++)
    {
        scanf("%d",&num);
        f[num]=1;
    }
    for(int i=0;i<N;i++)
    {
        int flag=0;
        scanf("%s %d",name,&k);
        for(int j=0;j<k;j++)
        {
            scanf("%d",&num);
            if(f[num]==1)
            {
                if(flag==0)
                {
                    printf("%s:",name);
                    snum++;
                    flag=1;
                }
                printf(" %04d",num);
                nnum++;
            }
        }
        if(flag)
            printf("\n");
    }
    printf("%d %d",snum,nnum);
    return 0;
}
