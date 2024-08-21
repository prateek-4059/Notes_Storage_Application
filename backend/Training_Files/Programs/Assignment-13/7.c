#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    scanf("%s",&s1);

    int cntv=0,cntc=0;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||
        s1[i]=='A'||s1[i]=='E'||s1[i]=='O'||s1[i]=='U'){
            cntv++;
        }
        else{
            cntc++;
        }
    }
    printf("Vowels is %d\n",cntv);
    printf("Consonants are %d\n",cntc);
}