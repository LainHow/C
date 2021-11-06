#include<stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char passwd[100];
    int i,j,k,t,move;
    for (int i = 0; i < argc-2; i++)
    {
        passwd[i] = *argv[i+1];
    }
    move = atoi(argv[argc-1]);

    for(i=0; i < 5; i++)
        {
            if(passwd[i] >= 'A' && passwd[i] <= 'Z')
            {
                passwd[i] = ((passwd[i]-'A')+move)%26+'A';
            }
            else if(passwd[i] >= 'a' && passwd[i] <= 'z')
            {
                passwd[i] = ((passwd[i]-'a')+move)%26+'a';
            }
        }
        printf("%s",passwd);
        printf("\n");
    return 0;
}