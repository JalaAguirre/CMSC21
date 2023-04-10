#include <stdio.h>

int main(void){

    int point;

    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I\n");
    scanf("%d", &point);

    printf("At point: %d\n", point);
    if (point == 0 || point == 1 ||  point == 5){
        printf("point: C arrived to charging station");
    }
    else if(point == 2){
        printf("point: C is a charging station");
    }
    else if(point == 3){
        printf("point: D is a charging station");
    }
    else if(point == 4 || point == 6){
        printf("point: D arrived to charging station");
    }
    else{
        printf("point: No direct path to charging station");
    }

}
