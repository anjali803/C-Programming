// check whether a charater is digit or not
#include<stdio.h>
int main()
{
    int digit;
    printf("ENTER A CHARATER :\n");
    scanf("%d",&digit);
    printf("%d",digit >0 && digit <15);
    return 0;
}