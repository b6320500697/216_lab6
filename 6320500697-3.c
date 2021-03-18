#include<stdio.h>
int main()
{
    int i,j,k,n,a,b,c,max,d;
    scanf ("%d %d",&n,&a);
    char w;
    int q[n],e[n];
    for (i=0;i<n;i++)
    {
        q[j] = 0;
        e[j] = 0;
    }
    for (j=0;j<q;j++)
    {
        scanf (" %c %d %d",&w,&b,&c);
        if (w=='U')
        {
            q[b-1] = c;
        }
    }
}
