#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,k;
    scanf ("%d",&n);
    char word[n][50];
    char cha[50];
    for (i=0;i<n;i++)
    {
        scanf ("%s",word[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(strcmp(word[k],word[k+1])==1)
            {
                strcpy(cha,word[k]);
                strcpy(word[k],word[k+1]);
                strcpy(word[k+1],cha);
            }
        }
    }
    for (j=0;j<n;j++)
    {
        printf ("%s\n",word[j]);
    }
    return 0;
}
