//print the factorial
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("ENTER THE VALUE FOR N :\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        fact = fact *i;

    }
    printf("factorial is :%d",fact);
}