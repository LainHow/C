#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main() 
{ 
    char a1[] = {1,2,3,45,5,6};
    char *a = a1;
    int num[1000] = {0};
    int i ,j ,m;
    printf("%d",sizeof(a1));
    printf("%d",sizeof(a));
    
    /*
    for (i = 0; i < sizeof(a); i++) {
        num[i] = *(a+i);
    }
    for ( i = 0; i < sizeof(a); i++)
    {
        printf("%d ",num[i]);
    }
    */
    
}
