#include <stdio.h>  //作业要求word文档

int main(){
    FILE* file_ptr = fopen("leap_year.txt","r");
    char ch;
    while((ch = fgetc(file_ptr))!=EOF){
        printf("%c",ch);
    }
    fclose(file_ptr);
    return 0;
}