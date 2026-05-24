#include <stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=m-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}