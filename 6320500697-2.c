#include <stdio.h>
int main()
{
    int n,i,rm,f,j,k,d;
    scanf("%d",&n);
    int fi[n];
    int rm1[n];
    scanf("%d",&f);
    scanf("%d",&rm);
    for(i=0;i<n;i++)
    {
        fi[i]=f%10;
        f=f/10;
        rm1[i]=rm%10;
        rm=rm/10;
    }
    for(j=n-1;j>=0;j--)
    {
        if(fi[j]==rm1[j])
        {
            d++;
        }
        else
        {
            k++;
        }
    }
    printf("%d %d",d,k);
    return 0;

}
