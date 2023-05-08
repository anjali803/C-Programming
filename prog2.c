// area of the circle
#include<stdio.h>
int main()
{
    float radius;
    printf("ENTER THE RADIUS OF THE CIRCLE:\n");
    scanf("%f",&radius);
    float area = 3.14 * radius * radius;
    printf("AREA OF THE CIRCLE :%f",area);
    return 0;
}