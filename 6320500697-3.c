#include<stdio.h>
int main()
{
    int i,j,k,n,a,b,c,max,d=0;
    scanf ("%d %d",&n,&a);
    char w;
    int q[n],e[n];

    for (i=0;i<n;i++)
    {
        q[i] = 0;
        e[i] = 0;
    }
    for (i=0;i<a;i++)
    {
        scanf (" %c %d %d",&w,&b,&c);
        if (w == 'U')
        {
            q[b-1] = c;
        }
        else if (w == 'P')
        {
            max = q[b-1];
            for (k=b;k<c;k++)
            {
                if (max<q[k])
                {
                    max=q[k];
                }
            }
            e[d] = max;
            d++;
        }
    }
    for (i=0;i<d;i++)
    {
        printf ("%d\n",e[i]);
    }
    return 0;
}
