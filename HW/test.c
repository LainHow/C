#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[2][2][5];
    char str[4]="abc";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            strcat(a[i][j] ,str);
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%s\n",a[i][j]);
        }
        
    }
    
    
    
    
   
    

}
















    