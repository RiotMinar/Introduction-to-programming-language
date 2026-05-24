#include <stdio.h>

int main()
{
    int n,min=__INT_MAX__,index=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            index=index+i;
            break;
        }
    }
    printf("%d %d",min,index);
    return 0;
}