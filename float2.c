#include <stdio.h>

int main(){
    float a=1,b=3;
    const float pi =3.14;       ///常量只读，不能变const
    float * p=&a;                      ///定义一个常量，重要的是在变量前面加上取地址符&，让p存储a的地址
    printf("a value=%f,a adress=%p,p value=%p,p adress=%f,*p_a=%d\n",a,&a,p,&p,*p);///更好的理解指针
    printf("1/3=%10.7f",a/b);       ///想要表示位数，在%f,f之前加上想要保留的位数
    return 0;
}