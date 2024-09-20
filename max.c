#include <stdio.h>

int main()
{
    int max(int x,int y);         //函数的声明，当max函数在主函数后面时，要在上面声明一下  
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("max=%d",c);
    return 0;
}
int max(int x,int y)              //max函数括号里面是函数的参数名和类型，int整形不能少
{
    int n;
    if(x>y)n=x;
    else n=y;
    return(n);                    //return的作用，把那也就是最大值返回到调用max的第八行的c，把值赋给c
}