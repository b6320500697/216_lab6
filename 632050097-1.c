#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,k=0;
    scanf ("%d",&n);
    if (n>=1 && n<=10000)
    {
        char word[n][50];
        char cha[n][50];
        for (i=0; i<n; i++)
        {
            scanf (" %[^\n]s",word[i]);
        }
        for (i=1; i<n; i++)
            for (j=0; j<i; j++)
        {
             for (k=0; k<1000; )
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
   for (i=0; i<n; i++)
   {
       printf ("%s\n",word[i]);
   }
   }
 return 0;
}
