#include<stdio.h>
int main(){
     float c,f=103;
     c=5./9*(f-32);                   //5./9和*5/9的区别，5/9计算机认为是两个指数想初，为0
     printf("temperature is %f\n",c);
}