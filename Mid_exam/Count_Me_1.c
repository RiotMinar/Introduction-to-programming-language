#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0 && a%3==0)
        {
            e++;
        }
        else if(a%2==0)
        {
            e++;
        }
        else if(a%3==0)
        {
            o++;
        }
    }
    printf("%d %d",e,o);
    return 0;
}