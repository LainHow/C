#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000] ;
    char arr[100][100] ;
    gets(str);
    int i = 0;
	int init_size = strlen(str);
	char space[] = " ";

	char *info = strtok(str, space);

	while(info != NULL)
	{
		int len = strlen(info);
		for (int j = 0; j < len+1; j++)
		{
			arr[i][j] = info[j];
		}
		i = i + 1;
		info = strtok(NULL, space);
		
	}

	int count = i;


    for ( int k = 0; k < count ; k++)
	{
		if ( (k + 1) % 5 == 0 )
		{
			printf("5:%.1f%%\n",arr[k]);
		}

		else if ((k + 1) % 5 == 1 )
		{
			printf("1:%s  ",arr[k]);		
		}

		else if ((k + 1) % 5 == 2 )
		{
			printf("2:%s  ",arr[k]);		
		}

		else if ((k + 1) % 5 == 3 )
		{
			printf("3:%s  ",arr[k]);		
		}
		
		else if ((k + 1) % 5 == 4 )
		{
			printf("4:%s  ",arr[k]);		
		}
	}

	
    
    
    
    return 0;
}