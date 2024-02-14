#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define RAD(R) R*R
int main()
{
    float area;
    int x;
    scanf("%d",&x);
    area=PI*RAD(x);
    printf("%f",area);
    return 0;
}