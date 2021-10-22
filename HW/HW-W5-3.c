#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	srand( time(NULL) );
	
	int r=rand()%100;
	int guess,count = 0;

	do
	{	
		char order[2];
		printf("請輸入數字0-99(輸入g以結束遊戲):\n");
		printf("R:%d\n",r);
		scanf("%c",&order[0]);
		scanf("%c",&order[1]);
		if (count > 20 )
		{
			printf("You Lose!!");
			break;
		}
		else
		{
			if (order[0]=='g')
			{
				printf("You Give Up!!共猜了%d次",count);
				break;
			}
			else
			{
				guess = atoi(order);
				if (guess == r)
				{
					count++;
					printf("Bingo!!共猜了%d次",count);
					break;
				}
				else if ( guess < r)
				{
					count++;
					printf("Guess:%d\n",guess);
					printf("高一點\n");
					printf("COUNT:%d\n",count);
				}
				else if ( guess > r)
				{
					count++;
					printf("Guess:%d\n",guess);
					printf("低一點\n");
					printf("COUNT:%d\n",count);
				}
			
			}
		}
	} while (count<=20);
	
	return 0;
}