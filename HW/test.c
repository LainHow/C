#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    char a[5] = {'a','b','c','4','5'};
    printf("%c",a[-1]);
    int b = a[3] + a[4];
    printf("\n%d",b);
 
    return 0;
}