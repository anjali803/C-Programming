//program to give grades to student
#include<stdio.h>
int main()
{
    int mark;
    printf("ENTER YOUR MARK HERE MAN----:\n");
    scanf("%d",&mark);
    if(mark<30)
    {
        printf("YOUR GRADE IS C ");
    }
    else if(mark>=30 && mark <70)
    {
        printf("YOUR GRADE IS B ");
    }
    else if(mark>=70 && mark <90)
    {
        printf("YOUR GRADE IS A ");
    }
    else if(mark>=90 && mark<=100)
    {
        printf("YOUR GRADE IS A+ ");
    }
    else{
        printf("MARKS IS UPTO 100");
    }
}