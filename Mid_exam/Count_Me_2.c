#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    scanf("%s",&a);
    int n=strlen(a);
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {

        }
        else
        {
            x++;
        }
    }
    printf("%d",x);
    return 0;
}