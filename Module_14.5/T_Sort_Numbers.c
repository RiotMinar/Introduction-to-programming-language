#include <stdio.h>
#include <string.h>
void sort(int *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<3;j++)
        {
            if(p[i]>p[j])
            {
                int tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",p[i]);
    }
}

int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    sort(a);
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",b[i]);
    }

    return 0;
}