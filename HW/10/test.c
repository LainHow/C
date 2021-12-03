#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{ 
    int i;
    int a[10] = {0};
    for ( i = 0; i < 10; i++)
    {
       scanf("%d" ,&a[i]);
    }
    
    
    for (i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
    
}
