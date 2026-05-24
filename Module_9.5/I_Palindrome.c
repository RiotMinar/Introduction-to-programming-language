#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int k=0,n=strlen(a);
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==a[j])
        {
            k++;
        }
    }
    if(k==n/2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}