#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100000]={0},num,grade,max=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&num,&grade);
        a[num]+=grade;
    }
    for(int i=0;i<n;i++)
    {
        if(a[max]<a[i])
            max=i;
    }
    printf("%d %d",max,a[max]);
    return 0;
}
