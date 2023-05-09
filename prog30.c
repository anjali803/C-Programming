//using function finding the percentage of marks of three subject
#include<stdio.h>

int calpre(int eng,int hindi,int mala); //function declaration

int main()
{
    int eng = 56;
    int hindi = 79;
    int mala = 89;
    printf("PRECENTAGE IS :%d\n",calpre(eng,hindi,mala));
    return 0;
}

int calpre(int eng,int hindi,int mala){
    return (eng+hindi+mala)/3;
}