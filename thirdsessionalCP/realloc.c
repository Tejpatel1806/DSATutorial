#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *buffer;
    if((buffer=(char *)malloc(10))==NULL)
    {
        printf("malloc failed.\n");
        exit(1);
    }
    strcpy(buffer,"HYDERABAD");
    printf("\nBuffer contains:%s \n",buffer);
    if((buffer=(char *)realloc(buffer,15))==NULL)
    {
        printf("Reallocation failed:\n");
        exit(1);
    }
    printf("buffer size modified\n");
    printf("buffer still contains:%s",buffer);
    strcpy(buffer,"secunderbad");
    printf("buffer now contains:%s",buffer);
    return 0;
}