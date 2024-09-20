#include <stdio.h>

int main()
{
    int a,b,bigger;
    printf("plese input two number that you want to know which one is bigger");
    scanf("%d%d",&a,&b);
    if(a>b)
      bigger=a;
    if(a<b)
     bigger=b;
    else
     bigger=a=b;
    printf("bigger=%d",bigger);
    return 0;
}