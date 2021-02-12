#include <stdio.h>
#include <string.h>


int canMove(char s[]);
void deleteIndedx(char string[], int index);

int main(){

    int t;
    scanf("%d ",&t);

    while ( t--){

        char s[102];
        fgets(s, 102, stdin);

        const int len = strlen(s);

        int moveCount = 0;

        while(1){
            if ( canMove(s) == 1 )    moveCount++;
            else                            break;
        }

        //printf("\nMove Count: %d \n",moveCount);

        if ( moveCount % 2 == 0 ) printf("NET\n");
        else                      printf("DA\n");
    }

    return 0;

}

int canMove(char s[]){

    int len = strlen(s)-1 , i;
    if ( len < 2 ) return 0;

    for ( i = 0 ; i < len-1; i++ ){
        if ( s[i] !=  s[i+1]  ){
            deleteIndedx(s,i);
            deleteIndedx(s,i);
            return 1;
        }
    }
    return 0;
}

void deleteIndedx(char string[], int index){

    int i, len = strlen(string);

    for (  i = index ; i < len-1 ; i++ ) string[i] = string[i+1];
    string[len-1] = 0;
}


