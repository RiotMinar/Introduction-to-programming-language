#include <stdio.h>
#include <string.h>

int main()
{
    int x,n;
    scanf("%d",&x);
    n=(x+1)/2;
    for(int i=1;i<=5+n;i++)
    {
        for(int space=4+n;space>=i;space--)
        {
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*n-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}