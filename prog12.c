//program to check the day using switch case
#include<stdio.h>
int main()
{
    int num;
    printf("ENTER HERE :\n");//1-mon;2-tue;3-wed.....
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("monday");
                break;
        case 2: printf("tuesday");
                break;
        case 3: printf("wednesday");
                break;
                
        case 4: printf("thursday");
                break;

        case 5: printf("friday");
                break;
        case 6:printf("staturday");
                break;
        case 7:printf("sunday");
                break;
        default:printf("invaild day mister.....");


    }


}