#include <stdio.h>
int main ()
{
    int n,i,k,j;
    scanf ("%d",&n);
    int star[n][2];
    for (i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf ("%d",star[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            if (star[i][j]==i)
            {
                k++;
            }
        }
    }

}
