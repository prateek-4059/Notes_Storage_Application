#include <stdio.h>

int main()
{
    char c='a';
    int x=97;
    while(c<='z')
    {
        printf("%c --> %d\n",c,x);
        c++;
        x++;
    }
    return 0;
}