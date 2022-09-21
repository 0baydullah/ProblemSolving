#include <stdio.h>
#include <string.h>


int main(){

    char number[25];
    scanf("%s",number);

    int numbersOfLuckyDigit = 0, len = strlen(number);

    int i;
    for (  i = 0; i < len; i++  )  if ( number[i] == '7' || number[i] == '4') numbersOfLuckyDigit++;

    if ( numbersOfLuckyDigit == 0 ){
        printf("NO\n");
        return 0;
    }

    while ( numbersOfLuckyDigit != 0) {

        int currentDigit = numbersOfLuckyDigit % 10;
        numbersOfLuckyDigit /=  10;

        if ( currentDigit != 4 && currentDigit != 7 ){
            printf("NO\n");
            return 0;
        }
    }


    printf("YES\n");
    return 0;


}
