#include <stdio.h>

int main() {
    int num[5];
    int i,j,k,m,n;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    for ( j = 0; j < 5; j++)
    {
        for (k = j; k < 5; k++)
        {
            if (num[k]<num[j])
            {
                m = num[j]+num[k];   
                num[j] = m-num[j];   
                num[k] = m-num[k];     
            }
            
        }
        
    }

    for (n = 0; n <5; n++) {
        printf("%d ", num[n]);
    }

    

}