#include <stdio.h>

int main(void){
    int road_network [9][9] = {
        [0][0]=1, [0][1]=1, [0][5]=1,
        [1][0]=1, [1][1]=1, [1][2]=1,
        [2][1]=1, [2][2]=1, [2][4]=1, [2][5]=1,
        [3][3]=1, [3][4]=1, [3][8]=1,
        [4][3]=1, [4][4]=1,
        [5][0]=1, [5][2]=1, [5][5]=1,
        [6][0]=1, [6][3]=1, [6][6]=1,
        [7][5]=1, [7][7]=1, [7][8]=1,
        [8][7]=1, [8][8]=1
        };
    char road [9] = {'a','b','c','d','e','f','g','h','i'};

    for (int i = 0; i < 9; i++){
        if (i == 2 || i == 3){
            printf("[%c] = ", road [i]);
        }
        else{
            printf("%c   = ", road [i]);
        }

        for (int j = 0; j < 9; j++){
            printf("%3d", road_network [i][j]);
        }
        printf("\n");
    }

    return 0;

}