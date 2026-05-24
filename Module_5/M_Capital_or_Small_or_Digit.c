#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    int n;
    n=a;
    if(n>=65 && n<=90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(n>=97 && n<=122)
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}