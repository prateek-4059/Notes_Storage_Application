#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100],brr[100];
    printf("Enter first string:\n");
    scanf("%s",arr);

    strcpy(brr,arr);
    printf("Copied string is %s",brr);
}