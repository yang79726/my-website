#include<stdio.h>

int  main ( ) {     
int arr [ 5 ] = { 1 , 2 , 3 , 4 , 5 } ;     
int i ; 
for ( i = 0 ; i < 5 ; i ++ ) { 
    printf ( "arr[%d] 的值 = %d \t 地址 = arr + %d = %p\n" , i , *(arr+i) , i , &arr[i] ) ; 
    } 
return 0 ; 
} 
      