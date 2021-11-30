#include <stdio.h>


int main()
{
    char str[100] ;
    char a[100];
    int x = 0;
    gets(str);
    //scanf("%s",str);
    for(int i = 0 ; i <= strlen(str) ; i++)
    {
       for(int j = 0 ; j <= strlen(a) ; j++)
        {
            if (str[i] != a[j])
            {
               a[x] = str[i];
               x++;

            }
          //  break;
        }


    }
    puts(a);
    printf("%d \n",strlen(a));
    return main();
}
