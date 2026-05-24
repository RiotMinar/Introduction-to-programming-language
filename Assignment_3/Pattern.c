#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int space=n-i;space>=1;space--)
        {
            printf(" ");
        }
        for(int star=1;star<=2*i-1;star++)
        {
            if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(int star=2*i-1;star>=1;star--)
        {
             if(i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}