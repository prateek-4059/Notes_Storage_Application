#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    printf("Enter first string: ");
    scanf("%s",&s1);

    char s2[100];
    printf("Enter second string: ");
    scanf("%s",&s2);

    int cmp=strcmp(s1,s2);
    if(cmp==0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
}