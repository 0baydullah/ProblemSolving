#include <stdio.h>

int main(){

    int n, k;
    scanf("%d %d",&n,&k);

    int bucket[n], i, minimumTime = 0;
    for ( i = 0; i < n ; i++ )  scanf("%d",&bucket[i]);

    for (  i = 0 ; i < n ; i++ ){

        if ( k % bucket[i] == 0 ){
            minimumTime = k / bucket[i];
            break;
        }
    }

    for ( i = 0; i < n ; i++ ){
        if ( k % bucket[i] == 0  ){

            int timeForThisBucket = k / bucket[i];
            if ( timeForThisBucket < minimumTime ){
                minimumTime = timeForThisBucket;
            }
        }
    }

    printf("%d\n",minimumTime);


    //return 0;
}
