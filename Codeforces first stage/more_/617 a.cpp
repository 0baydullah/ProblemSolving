#include <stdio.h>

 int main()
 {
     int x;

     scanf("%d",&x);

     x%5 == 0 ? printf("%d\n", x/5) : printf("%d\n", x/5+1);
 }
