#include<stdio.h>
int main() 
{
    char cha;
    while(scanf("%c", &cha) != EOF)
    {
        if(cha!='\n')
        {
            printf("%c", (cha-7));
        }    
	else 
        {
            printf("\n");
        }    
    }
    return 0;
}
