#include <stdio.h>


int main()
{
    int k , n , w , i , price =0 , borrow;

    scanf("%d%d%d",&k,&n,&w);

    for ( i= 1 ; i<=w ; i++)
    {
       price = price + (i*k);
    }

    if ( n >= price)
        printf("0");
    else
    {
        borrow= price - n ;
        printf("%d",borrow);
    }

    return 0;
}
