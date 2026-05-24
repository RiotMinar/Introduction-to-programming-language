#include <stdio.h>
#include <string.h>
int main()
{
    char tmp,a[10],b[10],c[20];
    scanf("%s %s",&a,&b);
    int m=strlen(a),n=strlen(b);
    printf("%d %d\n",m,n);
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    int k=0;
    for(int i=m;i<m+n;i++)
    {
        c[i]=b[k];
        k++;
    }
    printf("%s\n",c);
    int p=strlen(c);
    // printf("%d\n",p);
    tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    printf("%s %s",a,b);
    return 0;
}