#include <stdio.h>

/* input 兩個數字
 output 兩個數字的乘積*/


int main() 
{
    float num_1 , num_2 ;                  
    float product ;
    scanf( "%f" , &num_1 );
    scanf( "%f" , &num_2 );
    product = num_1 * num_2 ;
    printf( "%f\n" , product ) ;
    return 0 ;

}