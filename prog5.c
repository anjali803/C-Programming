//program to check wheather a given number is divisible by two
#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER :\n");
    scanf("%d",&num);
    printf("%d",num%2==0);//1 means true 0 means flase (eg:10%2==0)
    return 0;
}