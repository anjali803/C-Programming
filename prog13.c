//program to check postive or negative
#include<stdio.h>
int main()
{
    int num;
    printf("ENTER YOUR NUMBER HERE :\n");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("ENTERED NUMBER IS POSITIVE!---");
        if(num%2==0)
        {
            printf("NUMBER IS EVEN !");
        }
        else{
            printf("NUMBER IS ODD!");
        }
    
    }else{
        printf("ENTERED NUMBER IS NEGATIVE !---");
    }
}
