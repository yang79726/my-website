#include <stdio.h>

int main()
{
    int a=1,b,n=1;
    printf("plese input a number that you want to its jiecheng");
    scanf("%d",&b);
    while(a<=b){
       n=n*a;
       a=a+1;
    }
    printf("%d!=%d",b,n);
    return 0;
}