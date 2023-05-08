//program to check whether a charater is upper case or not
#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER YOUR CHARATER HERE :\n");
    scanf("%c",&ch);
    // if(ch>='A' && ch<='Z')
    // {
    //     printf("CHARACTER IS UPPER CASE ******");
    // }
    // else{
    //     printf("CHARACTER IS LOWER CASE******");
    // }
    ch>='A' && ch<='Z'? printf("CHARACTER IS UPPER CASE "):printf("CHARACTER IS LOWER CASE ");
    return 0;
}
