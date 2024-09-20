#include <stdio.h> 

int main ( ) {    
int newarray1 [ 4 ] ;  
int i ; 
for ( i = 0 ; i < 4 ; i ++ ) {         
  newarray1 [ i ] = 2 * i ; 
} 
printf ( "newarray1 = {" ) ; 
for ( i = 0 ; i < 4 ; i ++ ) { 
  printf ( " %d " , newarray1 [ i ] ) ; 
  if ( i != 3 ) { 
    printf ( ", " ) ;
  } 
} 
printf ( "}\n" ) ; 
return 0 ; 
} 


