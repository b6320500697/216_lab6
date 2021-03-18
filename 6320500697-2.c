#include<stdio.h>
int main()
{
    int n,i,rm,f,j,k;
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


}
