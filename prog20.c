//sum of n natural numbers and then reverse them
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("ENTER THE VALUE FOR N:\n");
    scanf("%d",&n);
    printf("NUMBERS ARE :\n");
    for(int i=n;i>=1;i--)
    {
        sum= sum+i;
        printf("%d\n",i);
        
    }
    printf("sum =%d\n",sum);

}