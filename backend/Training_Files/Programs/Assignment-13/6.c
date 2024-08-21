#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    scanf("%s",&s1);

    int cnta=0,cntd=0,cnts=0;
    for(int i=0;i<strlen(s1);i++){
        if((s1[i]>='a' && s1[i]<='z')||(s1[i]>='A' && s1[i]<='Z')){
            cnta++;
        }
        else if(s1[i]>='0' && s1[i]<='9'){
            cntd++;
        }
        else{
            cnts++;
        }
    }
    printf("Alphabet is %d\n",cnta);
    printf("Digits are %d\n",cntd);
    printf("Special Characters are %d",cnts);
}