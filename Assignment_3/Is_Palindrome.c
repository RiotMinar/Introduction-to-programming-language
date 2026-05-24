#include <stdio.h>
#include <string.h>
int is_palindrome(char a[],int n)
{
    int flag=1;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==a[j])
        {

        }
        else
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{
    char a[1001];
    scanf("%s",a);
    int n=strlen(a);
    int ans=is_palindrome(a,n);
    if(ans==0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}