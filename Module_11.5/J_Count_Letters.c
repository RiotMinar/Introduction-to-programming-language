#include <stdio.h>
#include <string.h>
char a[10000001];
int main()
{
    scanf("%s",&a);
    int b[26]={0},n=strlen(a);
    for(int i=0;i<n;i++)
    {
        b[a[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(b[i]==0)
        {

        }
        else
        {
            printf("%c : %d\n",i+97,b[i]);
        }
    }
    return 0;
}