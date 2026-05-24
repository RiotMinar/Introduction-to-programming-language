#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++)
        {
            b[j]=a[j];
        }
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(b[j]>b[k])
                {
                    int tmp=b[j];
                    b[j]=b[k];
                    b[k]=tmp;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            printf("%d ",abs(a[j]-b[j]));
        }
        printf("\n");
       
    }
    return 0;
}