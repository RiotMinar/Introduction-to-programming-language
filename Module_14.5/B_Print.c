#include <stdio.h>
#include <string.h>
void print(int n,int a)
{
   if(n<a)
   {
    printf("%d ",n);
   }
   else
   {
    printf("%d",n);
   }
}
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        print(i,a);
    }
    return 0;
}