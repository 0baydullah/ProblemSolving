#include <stdio.h>
#include <string.h>

int main(){

    char stringX[100], stringY[100];

    scanf("%s %s",&stringX,&stringY);

    printf("%d\n",strcasecmp(stringX,stringY));

    return 0;

}
