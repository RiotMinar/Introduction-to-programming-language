#include <stdio.h>
#include <string.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++)
    {
        if(a[i]>0)
        {
            sum=sum+a[i];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)flag=1;
    }
    if(flag==0)
    {
        printf("0");
    }
    else
    {
        printf("%lld",sum);
    }
    return 0;
}