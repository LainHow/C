#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    printf("n=%d\n",n);

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n/2;
            printf("n=%d\n",n);
        }
        else
        {
            n = 3*n+1;
            printf("n=%d\n",n);
        }
    }

    return 0;
}
