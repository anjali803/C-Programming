//enter numbers until 7 encounters .. using do while loop
#include<stdio.h>
int main()
{
    int n;
    do{
        printf("ENTER THE NUM :\n");
        scanf("%d",&n);
        if(n%7==0)
        break;
    } while(1);
}