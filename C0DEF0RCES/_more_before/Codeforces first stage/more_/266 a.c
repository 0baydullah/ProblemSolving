#include <stdio.h>
#include <string.h>

int main()
{
   int n , i=0 , j=1 , flag=0;

   scanf("%d",&n);

   char str[n];
   scanf("%s",str);
   for (i=0 , j=1; i<n ; i++ , j++)
   {
       if (str[i]==str[j]) flag++;
   }
   printf("%d",flag);

}
