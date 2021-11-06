#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1. input 一串文字(str)
2. 將str用空格(" ")隔開 並存入陣列arr,arr[讀入順序][存放的字元]
3. 將arr輸出時按照讀入順序分類,分別做不同的處理
ex.第1,6,11...項靠左, 第5,10,15...項先做字元轉浮點數的處理,再換行
 */

int main()
{	
	/*1.*/
	char str[1000] ;
    char arr[100][100] ;
    gets(str);
    int i = 0;
	int init_size = strlen(str);
	char space[] = " ";

	/*2.*/
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
	
	
	/*3.*/
    printf("姓名         學號   分數    加減分   百分比\n");
	for ( int k = 0; k < i ; k++)
	{
		if ( (k + 1) % 5 == 0 )
		{
			float f;
			f = atof(arr[k]);
			printf("%7.1f%%\n",f);
		}

		else if ((k + 1) % 5 == 1 )
		{
			printf("%-6s  ",arr[k]);		
		}

		else if ((k + 1) % 5 == 2 )
		{
			printf("%9s  ",arr[k]);		
		}

		else if ((k + 1) % 5 == 3 )
		{
			printf("%5s  ",arr[k]);		
		}
		
		else if ((k + 1) % 5 == 4 )
		{
			printf("%7s  ",arr[k]);		
		}
	}

	
    
    
    
    return 0;
}