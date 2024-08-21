#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int sum=a+b+c+d+e;
    int avg=sum/5;
    float percent=sum/5;
    printf("Total = %d\n",sum);
    printf("Average = %d\n",avg);
    printf("Percentage = %f\n",percent);
}