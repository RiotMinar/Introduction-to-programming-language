#include <stdio.h>
#include <string.h>
void max(int *p,int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    printf("%d",max);

}
void min(int *p,int n)
{
    int min=__INT_MAX__;
    for(int i=0;i<n;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
        }
    }
    printf("%d ",min);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p=&a;
    min(&a,n);
    max(&a,n);
    return 0;
}