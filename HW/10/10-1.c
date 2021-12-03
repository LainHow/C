#include <stdio.h>
#include "FUNC.h"

int main(){
    int a[100],temp;
	char c;
	int i, j, k = 0;
	printf("數字:\n");
	for (i = 0; ; i++)
	{
		scanf("%d", &a[i]);
		k++;
		c = getchar();
		if (c == '\n')
			break;
	}
    sort_num(a,i);
    return 0;
    }