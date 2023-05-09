//printing the reverse the table
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER N :\n");
    scanf("%d",&n);
    for(int i=10 ; i>=1 ; i--)
    {
         printf("%d\n",n*i);
    }
   
}