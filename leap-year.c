#include <stdio.h>  //作业要求word文档

int main()
{
    int year=2000,limit=2100,count=0;
    FILE*p_leap = fopen("leap_year.txt","w");                //指针FILE*，pointer to file in ssd or hdd,fopen,file open,w,write.
    while (year <=limit){
      if((year%4 == 0 && year%100!=0)||(year%400==0)){       //==是相等，=是从右往左赋值，%取余，||,&&，逻辑运算符
       printf("year %d is a leap year.\n",year);
       fprintf(p_leap,"year %d is a leap year.\n",year);
       count++;
      }
       year++;
    }
    printf("there are %d leap years \n",count);
    fprintf(p_leap,"there are %d leap years \n",count);
    fclose(p_leap);                                         //fclose,file close.
    return 0;
} 