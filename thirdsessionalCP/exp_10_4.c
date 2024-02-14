#include<stdio.h>
#include<conio.h>
#define PI 3.14
#define SQR(R) R*R
#define RAD(R) SQR(R)
int main()
{
    float area;
    int x;
    scanf("%d",&x);
    area=PI *RAD(x);
    printf("%f",area);
   return 0;
}