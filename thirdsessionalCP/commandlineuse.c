#include<stdio.h>
int main(int argc ,char *argv[])
{
    FILE *fp1,*fp2;
    char c;
    printf("\n Total number of argument is:%d",argc);
    fp1=fopen(argv[1],"w");
    printf("data in file 1 is:\n");
    while((c=getchar())!=EOF)
    {
        putc(c,fp1);
    }
    fclose(fp1);
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");
    while((c=getc(fp1))!=EOF)
    {
       putc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("data in 2 file:\n");

    fp1 = fopen(argv[2], "r");
    

    while ((c == getc(fp1)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp1);
    return 0;
}