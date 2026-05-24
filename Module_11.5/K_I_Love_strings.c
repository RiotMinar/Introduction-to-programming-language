#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    char a[54],b[54];
    for(int i=0;i<t;i++)
    {
        scanf("%s %s",&a,&b);
        char c[108]={'\n'};
        int m=strlen(a),n=strlen(b);
        if(m==n)
        {
            int e=0,o=0;
            for(int j=1;j<=m+n;j++)
            {
                if(j%2==0)
                {
                    c[j]=b[e];
                    e++;
                }
                else
                {
                    c[j]=a[o];
                    o++;
                }
            }
        }
        else if(m<n)
        {
            int e=0,o=0;
            for(int j=1;j<=m*2;j++)
            {
                if(j%2==0)
                {
                    c[j]=b[e];
                    e++;
                }
                else
                {
                    c[j]=a[o];
                    o++;
                }
            }
            for(int j=(m*2)+1;j<(m*2)+1+(n-m);j++)
            {
                c[j]=b[e];
                e++;
            }   
        }
        else if(n<m)
        {
            int e=0,o=0;
            for(int j=1;j<=n*2;j++)
            {
                if(j%2==0)
                {
                    c[j]=b[e];
                    e++;
                }
                else
                {
                    c[j]=a[o];
                    o++;
                }
            }
            for(int j=(n*2)+1;j<(n*2)+1+(m-n);j++)
            {
                c[j]=b[e];
                e++;
            }   
        }
        for(int j=0;j<=strlen(c);j++)
        {
            c[j]=c[j+1];
        }
        printf("%s\n",c);
        for(int j=0;j<strlen(c);j++)
        {
            c[j]='\n';
        }
        
    }
    return 0;
}