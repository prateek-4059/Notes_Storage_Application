#include <stdio.h>
#include <conio.h>
#include<math.h>  
  
// Driver code 
int main()  
{ 
  // Principal amount 
  double principal; 
  scanf("%lf",&principal); 
  
  // Annual rate of interest 
  double rate;
  scanf("%lf",&rate);  
  
  // Time 
  double time;
  scanf("%lf",&time);  
  
  // Calculating compound Interest 
  double Amount = principal *  
                  ((pow((1 + rate / 100),  
                    time))); 
  double CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 
  return 0; 
} 