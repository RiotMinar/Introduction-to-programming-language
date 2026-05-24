#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    if(b==0)
    {
        printf("YES");
    }
    else
    {
    if(a%b==0 || b%a==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
    return 0;
}