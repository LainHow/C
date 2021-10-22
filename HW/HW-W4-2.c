#include <stdio.h>
/*
1.input 整數n
2.設定一個函式loop(n) 
若n=1,則結束 
若n為偶數 ,則n=n/2 ,並再次執行loop(n)
若n為奇數 ,則n=3*+1 ,並再次執行loop(n)
*/

int loop(int n){
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        n = n/2;
        printf("n=%d\n",n);
        return loop(n);
    }
    else
    {
        n = 3*n+1;
        printf("n=%d\n",n);
        return loop(n);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("n=%d\n",n);
    loop(n);
    

    return 0;
}
