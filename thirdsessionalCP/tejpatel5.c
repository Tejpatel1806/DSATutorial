#include <stdio.h>
// #include<string.h>
int main(void)
{
    char alphas[] = {"abcdefghijklmnopqrstuvwxyz !-."};
    // printf("%d\n",strlen(alphas));
    int secret[] = {92, 90, 77, 78, 92, 74, 76, 91};
    int i, alen = 0;
    int offset = 0, off = 0, idx = 0;
    int messageLen = 8;

    //the mistakes are below this line //

    for (alen = 0; alphas[alen] != '\0'; alen++)
    {
        //empty body of loop//
        offset = alen / 7;
    }

    for (i = 0; i <= messageLen; i++)
    {
        off = (secret[i] - offset) / alen;
        idx = (i % 2) ? off : (alen - off);
        printf("%c%c", alphas[idx], (i == (messageLen - 1)) ? 'A' : 'D');
    }
    return 0;
}