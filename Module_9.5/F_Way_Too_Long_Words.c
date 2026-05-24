#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[101];
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        if(strlen(a)<=10)
        {
            printf("%s\n",a);
        }
        else
        {   
            int s=strlen(a);
            printf("%c%d%c\n",a[0],s-2,a[s-1]);
        }
    }
    return 0;
}