#include <stdio.h>
#include <string.h>
void make_num(int n)
{
    if(n==0)
    {
        return;
    }
    make_num(n/10);
    printf("%d ",n%10);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0\n");
        }
        else
        {
            make_num(n);printf("\n");
        }
    }
    return 0;
}