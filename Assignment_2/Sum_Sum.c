#include <stdio.h>

int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            x=x+a[i];
        }
        else
        {
            y=y+a[i];
        }
    }
    printf("%d %d",x,y);
    return 0;
}