#include "FUNC.h"
void sort_num(int *a , int b)
{
    int num[1000] = {0};
    int i ,j ,m;
    for (i = 0; i < b; i++) {
        num[i] = *(a+i);
    }
    for ( i = 0; i < b; i++)
    {
        for (j = i+1; j < b; j++)
        {
            if ( num[j] < num[i])
            {
                m = num[i];   
                num[i] = num[j];   
                num[j] = m ;     
            }            
        }        
    }
    for (i = 0; i < b; i++) {
        printf("%d ", num[i]);
    }
}
