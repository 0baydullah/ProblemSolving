#include "stdio.h"
#include "string.h"

int main()
{
   int i, T , plus = 0 , minus = 0 , out;

   scanf("%d",&T);

   for (i=0 ; i <= T ; i++)
   {
       char in[5];

       gets(in);

       if (in[1] == '+')
        plus++;
       else minus++;

   }

     out =plus - minus +1;

       printf("%d\n",out);

}


