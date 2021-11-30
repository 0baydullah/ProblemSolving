#include <stdio.h>
#include <math.h>

int main(){

    int matrix[5][5];
    int row , col , i , j, move;


    for (  i = 0 ; i < 5 ; i++ ){
        for (  j = 0 ; j < 5 ; j++ ){
            scanf("%d",&matrix[i][j]);
            if ( matrix[i][j] == 1 ){
                row = i;
                col = j;
            }
        }
    }


    int row_move, col_move;
    row_move = abs(2-row);
    col_move = abs(2-col);

    move = row_move + col_move;

    printf("%d\n",move);

    return 0;

}
