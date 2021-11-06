#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char text[10][10][20]={0} , target[100]={0} , space[]= " " ;
    int i = 0,j = 0, k = 0 ,boo = 0 , counter = 0 , words = 0,lines = 0,address[100][2] ,max_words = 0;
    printf("請輸入要搜尋的關鍵字:\n");
    for ( i = 0; i < 100; i++)
        {
            scanf("%c",&target[i]);
            if (target[i] == '\n')
            {
                target[i]='\0';
                break;
            }
        }
    int len = strlen(target);    
    i=0;
    printf("請輸入要搜尋的文字段落:\n");
    while (1)
    {
        char input[1000]= {0};
        j = 0;
        for (int k = 0; k < 999; k++)
        {
            scanf("%c",&input[k]);
            if (input[0] == '\n')
            {
                input[1]='\0';
                boo=1;
                break;
            }
            if (input[k] == '\n')
            {
                input[k+1]='\0';
                break;
            }
        }
        if (boo == 1)
        {
            break;
        }
        char *token;
        token=strtok(input, space);
        while(token!=NULL)
        {
            strcat(text[i][j],token);
            token=strtok(NULL, space);
            j++;
            words++;
            if (words >= max_words)
            {
                max_words = words;
            }            
        }
        i++;
        lines++;
        words=0;
    }
    for ( i = 0; i < lines; i++)
    {
        for (j = 0; j < max_words; j++)
        {
            if (strspn(text[i][j],target) == len && strlen(text[i][j]) == len)
            {
                address[counter][0] = i+1;
                address[counter][1] = j+1;
                counter++;

            }
            
        }
        
    }
    printf("關鍵字%s 出現了%d次\n",target,counter);
    for ( i = 0; i < counter; i++)
    {
        printf("出現位置為第%d行,第%d個單字\n",address[i][0],address[i][1]);
    }
    return 0;
}