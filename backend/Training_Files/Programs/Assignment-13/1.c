#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    printf("Enter a string:\n");
    scanf("%s",arr);

    int len=strlen(arr);
    printf("Length is %d",len);
}