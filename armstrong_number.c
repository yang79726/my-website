#include<stdio.h>
#include<math.h>

int main(){
    int num=0,var,sum=0,operating_dig;
    printf("please input a number ");
    scanf("%d",&num);
    var=num;
    while(var>0){
        operating_dig = var % 10;           //取余数，153%10=3
        sum+=pow(operating_dig,3);
        var=var/10;                         //除法153/10=15.3，int取整15
    }
    if(sum == num){
        printf("this number is a armstrongr_number");
       return 1;
    }
    else
       printf("not");
       return 0;  
}