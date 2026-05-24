#include <stdio.h>

int main()
{
    int n;
    char a='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",a);
        }
        a+=1;
        printf("\n");
    }

    return 0;
}