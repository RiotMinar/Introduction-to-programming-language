#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char s[10001];
        scanf("%s",&s);
        int cap=0,sml=0,num=0,n=strlen(s);
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                cap++;
            }
            else if(s[i]>=97 && s[i]<=122)
            {
                sml++;
            }
            else if(s[i]>=48 && s[i]<=97)
            {
                num++;
            }
        }
        printf("%d %d %d\n",cap,sml,num);
    }
    return 0;
}