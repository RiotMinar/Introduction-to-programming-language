#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        else
        {
            while(n!=0)
            {
            printf("%d ",n%10);
            n=n/10;
            
            }
        }
        printf("\n");
    }
    return 0;
}