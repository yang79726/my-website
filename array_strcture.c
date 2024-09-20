#include <stdio.h>

struct student{
    char name[50];
    char class[100];
    int number;
    float mark[5];
};
int main(){
    struct student s[3];
    for (int i=0;i < 3;i++){
        printf("please input student's name\n");
        scanf("%s",&s[i].name);
        printf("class");
        scanf("%s",&s[i].class);
        printf("number");
        scanf("%d",&s[i].number);
        printf("marks");
        for (int j=0;j<5;j++){
            scanf("%f",&s[i].mark[j]);      ///注意如果使用错误的%d，只适用于int,会使value无法录入。
        }
    }
    printf("学生详细信息:\n"); 
    for (int i = 0; i < 3; i++ ) { 
        printf("姓名：%s\n", s[i].name); 
        printf("班级：%s\n", s[i].class); 
        printf("学号：%d\n", s[i].number); 
        printf("分数： "); 
        for (int j = 0; j < 5; j++ ) { 
            printf("%.2f", s[i].mark[j]); 
        } 
        printf("\n\n"); 
    } 
    return 0; 
} 

