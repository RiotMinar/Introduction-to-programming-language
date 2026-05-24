#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n1,n2,d1,d2;
        scanf("%d %d %d",&n1,&n2,&d1);
        d2=(n1*d1)/(n1+n2);
        printf("%d\n",d1-d2);
    }
    return 0;
}