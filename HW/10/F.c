#include "F.h"
void sort_num(int *a , int b)
{
    int num[1000] = {0};
    int i ,j ,m;
    for (i = 0; i < b+1; i++) {
        num[i] = *(a+i);
    }
    for ( i = 0; i < b+1; i++)
    {
        for (j = i+1; j < b+1; j++)
        {
            if ( num[j] < num[i])
            {
                m = num[i];   
                num[i] = num[j];   
                num[j] = m ;     
            }            
        }        
    }
    for (i = 0; i < b+1; i++) {
        printf("%d ", num[i]);
    }
}