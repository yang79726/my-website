#include <stdio.h>
#include <stdlib.h>

int main(){
    double fixed=7000/300,daily_cost=30,year_cost=0,total=0;
     year_cost *= 2;
     year_cost=fixed*300+daily_cost*300;
    FILE *p_total =fopen("total.txt","w");
    for(int age=0;age<=18;age++){
        
        total+=year_cost;
        printf("age=%2d,year_cost=%.2f,total=%.2f\n",age,year_cost,total);
        fprintf(p_total,"age=%2d,year_cost=%.2f,total=%.2f\n",age,year_cost,total);
        ///year_cost *= r;
    }
    fclose(p_total);
    
    return 0;
}