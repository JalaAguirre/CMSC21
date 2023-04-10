#include <stdio.h>

int main(void){

    int i, days, first_day;


    printf("Enter number of days in month: "); 
    scanf("%d", &days); 

    printf("Enter the starting day of the week (1=Sun, 7=Sat): "); 
    scanf("%d", &first_day); 

    printf("\n");
    
    if (days >= 28 && days <= 31){ //Error Catching: To ensure valid input
        if (first_day > 1 || first_day < 7){ //Error Catching: To ensure valid input
            for(i = 1; i < first_day; i++){ 
                printf("   ");
            }
            
            for(i = 1; i <= days; i++){
                printf("%3d", i);
                if((first_day + i - 1) % 7 == 0)
                    printf("\n");
            }

        }
        else{
            printf("Invalid Input");
        }
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}

