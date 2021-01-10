#include <stdio.h>
#include <string.h>

int main()
{
    printf("enter your question.\n");
    
    char in[25];
    scanf("%[^\n]", &in);
    getchar();

    char str[]="am i an idiot?";

    if(strcmp(in, str)==0)
    printf("yes you are.\n");

    else
    printf("wrong question.\n");
    

    return 0;
}