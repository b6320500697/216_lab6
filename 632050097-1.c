#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,k=0;
    scanf ("%d",&n);
    char word[n][50];
    char cha[50];
    for (i=0;i<n;i++)
    {
        scanf ("%s",word[i]);
    }
    for (i=1; i<n; i++)
    {
        for (j=0; j<i; j++)
        {
             while(1)
             {

                 if (word[i][k] < word[j][k])
                 {
                      strcpy (cha[i],word[j]);
                      strcpy (word[j],word[i]);
                      strcpy (word[i],cha[i]);
                      break;
                 }
                 else if (word[i][k] == word[j][k])
                 {
                        k++;
                 }
                 else break;
            }
        }
    }
    for (j=0;j<n;j++)
    {
        printf ("%s\n",word[j]);
    }
    return 0;
}
