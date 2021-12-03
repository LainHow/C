#include <stdio.h>

void find_max(int a[], int count);
int main()
{
    int a[5] = {49, 66, 42, 101, 82};
    int count = (int) sizeof(a) / sizeof(a[0]) ;
    find_max(a, count);
    return 0;
}
void find_max(int a[], int count)
{
    int max = 0;
    for (int i = 0; i < count; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("max = %d",max);
}