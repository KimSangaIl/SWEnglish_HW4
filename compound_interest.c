#include <stdio.h>



int main(void) {
    int investment = 7000000, year = 10;
    float rate = 0.03;
    double total = investment;

    printf("Year   Total\n");
    
    for(int i = 1; i <= year; i++){
        total *= (1 + rate);
        printf("%2d   %10.1f\n", i, total);
    }

    return 0;
}