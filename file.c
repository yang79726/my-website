#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // 创建并打开源文件，用于写入
    sourceFile = fopen("source.txt", "w"); // "w" 模式用于写入
    if (sourceFile == NULL) {
        printf("无法创建源文件\n");
        return 1;
    }

    // 向源文件写入内容 "Hello, World!"
    fputs("Hello, World!", sourceFile);

    // 关闭源文件
    fclose(sourceFile);

    // 重新以读取模式打开源文件
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("无法打开源文件\n");
        return 1;
    }

    // 打开目标文件，用于写入
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("无法创建目标文件\n");
        fclose(sourceFile); // 关闭源文件
        return 1;
    }

    // 逐字符读取源文件内容并写入目标文件
    while ((ch = getc(sourceFile)) != EOF) { // 读取字符，直到文件结束
        putc(ch, destFile); // 将字符写入目标文件
    }

    // 关闭文件
    fclose(sourceFile);
    fclose(destFile);

    printf("文件复制完成。\n");
    return 0;
}
