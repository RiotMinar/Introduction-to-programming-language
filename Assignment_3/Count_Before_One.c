#include <stdio.h>
#include <string.h>
int count_before_one(int p[],int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)
        {
            break;
        }
        flag++;
    }
    return flag;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=count_before_one(a,n);
    printf("%d",ans);
    return 0;
}