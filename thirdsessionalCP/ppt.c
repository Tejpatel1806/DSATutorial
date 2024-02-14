#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, *ip ;
 ip = calloc ( 4, sizeof(int) );
 for (i = 0 ; i < 4 ; i++)
 * ip++ = i * i;
 for (i = 0 ; i < 4 ; i++)
 printf("%d\n", *ip );
}