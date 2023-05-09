//finding area of square ,circle and rectangle using functions
#include<stdio.h>

int squarearea(int side);
// int circlearea(int rad);
// int rectanglearea(int side);
int main()
{
    int n = 2;
    printf("AREA OF THE SQAURE : %d\n",n);
    return 0;
}

int squarearea(int side)
{
    return side*side;
}