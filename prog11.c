//program to check if a student is passed or failed
#include<stdio.h>
int main()
{
    int marks;
    printf("ENTER THE MARK : \n");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("STUDENT IS PASSED !\n");
    }else{
        printf("STUDENT FAILED");
    }
    return 0;
}