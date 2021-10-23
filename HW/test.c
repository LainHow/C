#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char a[20];
    int count = 1;
    while (count<11)
    {
        scanf("%c%c%c",&a[2*count-2], &a[2*count-1], &a[2*count]);
        count++;
    }
    
    for ( int i = 0; i < count; i = i+3)
    {
        printf("a[%d]=%c,a[%d]=%c ,a[%d]=%c\n",i ,a[i],i+1 ,a[i+1],i+2 , a[i+2]);
    }
    
    

    return 0;
}