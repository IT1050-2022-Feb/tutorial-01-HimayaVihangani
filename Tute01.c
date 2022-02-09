/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main(){
int mark1,mark2,sum;
float avg;
printf("enter the first mark:");
scanf("%d", &mark1);
printf("enter the second mark:");
scanf("%d", &mark2);
sum= mark1+mark2;
avg= sum/2;
printf("average of the two marks are %f", avg);


  
  return 0;
}

