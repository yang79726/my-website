#include<stdio.h>

int main(){
    char c='a';
    FILE *p_total =fopen("ASCLL.txt","w");
    while(c  <='z'){
        printf("%c is %3d while c -32=%c is %3d\n",c,c,c-32,c-32);
        fprintf(p_total,"%c is %3d while c -32=%c is %3d\n",c,c,c-32,c-32);
        c++;
    }
    fclose(p_total);
    return 0;
}