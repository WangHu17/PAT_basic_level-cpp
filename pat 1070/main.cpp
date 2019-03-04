#include <stdio.h>
void ShellSort(int a[],int n)
{
	int i,j,d;
	int temp;
	d=n/2;
	while(d>0)
	{
		for(i=d;i<n;i++)
		{
			temp=a[i];
			j=i-d;
			while(j>=0 && temp<a[j])
			{
				a[j+d]=a[j];
				j=j-d;
			}
			a[j+d]=temp;
		}
		d=d/2;
	}
}
int main()
{
    int n,i;
    double sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ShellSort(a,n);
    sum=(double)(a[0]/2)+(double)(a[1]/2);
    for(i=2;i<n;i++)
    {
        sum=sum/2+(double)a[i]/2;
    }
    printf("%d",(int)sum);
    return 0;
}
