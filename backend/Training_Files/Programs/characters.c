#include <stdio.h>
int main()
{
    printf("Test Characters: ");
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);

    char str[3];
    str[0]=a;
    str[1]=b;
    str[2]=c;
    char ans[3];
    int ind=0;
    for(int i=2;i>=0;i--){
        ans[ind]=str[i];
        ind++;
    }
    printf("The reverse of ");
    for(int i=0;i<=2;i++){
        printf("%c",str[i]);
    }
    printf(" is ");
    for(int i=0;i<=2;i++){
        printf("%c",ans[i]);
    }
}