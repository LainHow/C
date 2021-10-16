#include <stdio.h>
int main()
{
    int arr[4];
    int arr[0] = {1};
    int arr[1] = {2};
    int arr[2] = {3};
    int arr[3] = {4};
    int arr[4] = {5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
}