#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    int c[26]={0};
    scanf("%s",&s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        c[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(c[i]==0)
        {
            continue;
        }
        else
        {
            printf("%c - %d\n",i+97,c[i]);
        }
    }
    return 0;
}