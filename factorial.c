#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
unsigned long long result = 1;
for (unsigned int i = 1; i <= n; ++i)
{
result *= i;
}
return result;
}

int main()
{
unsigned int number;
printf("请输入一个非负整数： ");
scanf("%u", &number);
printf("%u 的阶乘 = %llu\n", number, factorial(number));
return 0;
}