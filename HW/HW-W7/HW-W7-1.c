#include <stdio.h>
#include <string.h>


int main(char *passwd[], int move)
{
    char encrypted[100];
    int i,j,k,t;
    for(i=0; i < 5; i++)
        {
            if(*passwd[i] >= 'A' && passwd[i] <= 'Z')
            {
                *passwd[i] = ((*passwd[i]-'A')+move)%26+'A';
            }
            else if(*passwd[i] >= 'a' && *passwd[i] <= 'z')
            {
                *passwd[i] = ((*passwd[i]-'a')+move)%26+'a';
            }
        }
        printf("%s",passwd);
        printf("\n");
    return 0;
}