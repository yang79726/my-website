#include <stdio.h>
#include <stdlib.h>

int main(){
    double fixed=7000/300,daily_cost=30,year_cost=0;
    year_cost=fixed*300+daily_cost*300;
    printf("year_cost=%.2f",year_cost);
    return 0;
}