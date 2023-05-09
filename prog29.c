//finding the sum
#include<stdio.h>

int sum (int a ,int b);//function declaration

int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS :\n");
    scanf("%d%d",&a,&b);
                                                //function call
    int s = sum(a,b);
    printf("SUM IS:%d\n",s);
    return 0;
}

int sum(int x,int y) ///function definition
{
    return x+y;
}