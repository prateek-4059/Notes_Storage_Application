#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter side of equilateral triangle: ");
    int a;
    scanf("%d",&a);
    float area;
    area=(sqrt(3)/4)*(a*a);

    printf("Area of equilateral triangle = %.1f",area);
}