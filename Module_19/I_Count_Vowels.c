#include <stdio.h>
#include <string.h>
int count(char s[],int index)
{
    int cnt = 0;
    if(s[index]=='\0')
    {
        return 0;
    }

    cnt = (s[index] == 'A'||s[index] == 'E'||s[index] == 'I'||s[index] == 'O'||s[index] == 'U'||
        s[index] == 'u'||s[index] == 'o'||s[index] == 'i'||s[index] == 'e'||s[index] == 'a');
    
    return cnt + count(s,index + 1);
}
int main()
{
    char s[200];
    fgets(s,sizeof(s),stdin);
    int ans = count(s,0);
    printf("%d",ans);
    return 0;
}