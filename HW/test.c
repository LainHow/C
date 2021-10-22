#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char a[2];
    scanf("%c",&a[0]);
    scanf("%c",&a[1]);
    
    

    int i;
    i=atoi(a);

    printf("i=%d , a=%c  %c",i,a[0],a[1]);
    

    return 0;
}