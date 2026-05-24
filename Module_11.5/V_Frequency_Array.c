#include <stdio.h>
#include <string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int b[100001]={0};
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        b[a]++;
    }
   
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",b[i]);
    }
    
    return 0;
}