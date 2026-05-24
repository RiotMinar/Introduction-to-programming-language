#include <stdio.h>
#include <string.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    if(r!=c)
    {
        flag=1;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(i==j)
           {
            if(a[i][j]==1)
            {

            }
            else
            {
                flag=1;
            }
           }
           else if(i+j==r-1)
           {
            if(a[i][j]==1)
            {

            }
            else
            {
                flag=1;
            }
           }
           else
           {
            if(a[i][j]==0)
            {

            }
            else
            {
                flag=1;
            }
           }
        }
    }
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}