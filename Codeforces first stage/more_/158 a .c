#include "stdio.h"

int main()
{
    int i, n, k, flag = 0;

    scanf("%d%d",&n , &k);

    int p[n];

    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&p[i]);
    }

    for (i=0 ; i<n ; i++)
    {

        if (p[i] > 0)
            if (p[i] >= p[k-1])
                flag++;
    }

    printf("%d\n",flag);




}
