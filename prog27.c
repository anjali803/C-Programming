//program using functions
#include<stdio.h>

void namaste();
void bonjour();
int main()
{
    printf("ENTER I FOR INDIAN AND F FOR FRENCH :\n");
     char ch;
    scanf("%c",&ch);
    if(ch =='i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("NAMASTE !\n");

}

void bonjour()
{
    printf("BONJOUR !\n");
}
