#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int w=0,f=0,p=0;
    int C1=0,C2=0,B1=0,B2=0,J1=0,J2=0;
    char a[2],b[2];
    for(int i=0;i<n;i++)
    {
        scanf("%s%s",a,b);
        if((a[0]=='C' && b[0]=='J') || (a[0]=='B' && b[0]=='C') || (a[0]=='J' && b[0]=='B'))
        {
            w++;
            if(a[0]=='C')C1++;
            if(a[0]=='B')B1++;
            if(a[0]=='J')J1++;
        }
        else if((a[0]=='C' && b[0]=='C') || (a[0]=='B' && b[0]=='B') || (a[0]=='J' && b[0]=='J'))
        {
            p++;
        }
        else
        {
            f++;
            if(b[0]=='C')C2++;
            if(b[0]=='B')B2++;
            if(b[0]=='J')J2++;
        }
    }
    printf("%d %d %d\n%d %d %d\n",w,p,f,f,p,w);
    printf("%c %c",(C1>B1&&C1>=J1)?'C':(B1>=J1)?'B':'J',(C2>B2&&C2>=J2)?'C':(B2>=J2)?'B':'J');
    return 0;
}
