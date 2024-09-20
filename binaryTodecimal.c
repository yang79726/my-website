#include<stdio.h>
#include<math.h>

int binarytodecimal() {
    int binary, number, count = 0, decimal = 0;
    
    // 提示用户输入二进制数
    printf("请输入二进制数: ");
    scanf("%d", &binary);
    
    // 循环将二进制转换为十进制
    while (binary > 0) {
        number = binary % 10;  // 取最后一位数字
        decimal += number * pow(2, count);  // 计算相应的十进制值并累加
        binary /= 10;  // 去掉最后一位
        count++;  // 计数器自增，代表当前位数
    }

    // 打印并返回结果
    printf("十进制数为: %d\n", decimal);
    return decimal;
}

int main() {
    // 调用函数
    binarytodecimal();
    return 0;
}
