#include <stdio.h>

/*
將輸入的5個整數存為一個陣列(num[5])
由num[0]跟num[1],num[2],num[3],num[4]比大小,若num[0]較大,則兩者對調
*/

int main() {
    int num[10];
    int i ,j ,m;
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }


    for ( i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if ( num[j] < num[i])
            {
                m = num[i];   
                num[i] = num[j];   
                num[j] = m ;     
            }
            
        }
        
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }

    

}