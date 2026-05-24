#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int x,a,b,c;
        scanf("%lld %lld %lld %lld",&x,&a,&b,&c);
        if(x%(a*b*c)==0)
        {
            printf("%lld\n",x/(a*b*c));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}