#include <stdio.h>  //作业要求word文档

int main()
{
    int year=2000,limit=2100;
    while (year <=limit){
      if((year%4 == 0 && year%100!=0)||(year%400==0))
       printf("year %d is a leap year.\n",year);
      else 
       printf("year %d is not a leap year\n",year);
       year++;
    }
    return 0;
} 