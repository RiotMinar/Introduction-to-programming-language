#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    int n;
    n=a;
    if(n>=65 && n<=90)
    {
        printf("%c",n+32);
    }
    else
    {
        printf("%c",n-32);
    }
    return 0;
}