#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j;
    scanf ("%d",&n);
    char word[n][50];
    char cha[50];
    for (i=0;i<n;i++)
    {
        scanf ("%s",&word[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(word[i],word[j])>0)
            {
                strcpy(cha,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],cha);
            }
        }
    }
    for (j=0;j<n;j++)
    {
        printf ("%s\n",word[j]);
    }
    return 0;
}
