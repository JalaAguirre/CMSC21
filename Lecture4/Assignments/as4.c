#include <stdio.h>

int main(void){

int n, i, sum = 1;

printf("Enter n: ");
scanf("%d", &n);

for (i = 1; i<=n; ++i){
    sum *= 2;
}

printf("2 to the %d: %d", n, sum);

}

