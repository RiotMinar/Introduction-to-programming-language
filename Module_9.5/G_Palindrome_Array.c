#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==a[j])
        {
            k++;
        }

    }
    if(k==n/2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}