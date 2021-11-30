#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] , b[100];
    int len , _1 = 0 , _2 = 0 , _3 = 0 , i;

    scanf("%s",&a);

    len = strlen(a);

    for (i=0 ; i<len ; i++)
    {
        if (a[i] == '1')
            _1++;

        else if (a[i] == '2')
            _2++;

        else if (a[i] == '3')
            _3++;
    }

    for (i=0 ; i< _1+_1-1 ; i++)
    {
        if (i%2 != 0)
            printf("+");
        else printf("1");
    }

    if (_2 != 0)
    {
        if (_1>0)
            printf("+");

        for (i=0 ; i< _2+_2-1 ; i++)
        {
            if (i%2 != 0)
                printf("+");
            else printf("2");
        }
    }

    if (_3 != 0)
    {
        if (_1>0 || _2>0)
        printf("+");

        for (i=0 ; i< _3+_3-1 ; i++)
        {
            if (i%2 != 0)
                printf("+");
            else printf("3");
        }
    }


    printf("\n");


    return 0;

}
