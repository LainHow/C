#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	srand( time(NULL) );
	
	int r=rand()%100;
	int guess,count = 0;

	while (count<21)
	{
		char input[3];
		printf("請輸入數字0-99(輸入g以結束遊戲):\n");
		scanf("%c%c%c",&input[0], &input[1], &input[2]);
		/*
		BUG: 
		如果宣告input[2],輸入12按ENTER,會將'\n'存入下一次的input[0]
		ex. 先猜50,再猜25 會出現
			input[0]='5' , input[1]='0'
			input[0]='\n'(\n不會顯示) input[1]='2'
			input[0]='5' , input[1]='\n'
		宣告input[3]時, 若只輸入'g'或個位數字則需要按兩次ENTER才能完成輸入
		*/
		if (input[0] == 'g')
		{
			printf("You Give Up!!共猜了%d次\n",count);
			break;
		}
		else
		{	
			count++;
			guess = atoi(input);
			/*
			整數=atoi(字串),表示字串轉整數
			*/
			if (guess == r)
			{
				printf("Bingo!!共猜了%d次\n",count);
				break;
			}
			else if (guess > r)
			{
				if (count == 20)
				{
					printf("You Lose!!\n");
					break;
				}
				else
				{
					printf("低一點\n");
				}
				
			}
			else if (guess < r)
			{
				if (count == 20)
				{
					printf("You Lose!!\n");
					break;
				}
				else
				{
					printf("高一點\n");
				}
				
			}
			
		}
		
	}
	
	
	return 0;
}