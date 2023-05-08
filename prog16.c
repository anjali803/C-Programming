//check if a number is armstrong or not
#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("ENTER YOUR NUMBER \n");
    scanf("%d",&num);
    if(num>0)
    {
        r=num%10;
        sum = sum + (r*r*r);
        num = num /10;
    }
    if(sum = num)
    {
        printf("ENTERED NUMBER IS A ARMSTRONG NUMBER \n");
    }
    else{
        printf("ENTERED NUMBER IS NOT ARMSTRONG NUMBER\n");
    }

}