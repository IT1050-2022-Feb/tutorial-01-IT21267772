/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2, total, average;

  printf("Enter mark of subject 1 : ");
  scanf("%f", &mark1);

  printf("Enter mark of subject 2 : ");
  scanf("%f", &mark2);

  total = mark1 + mark2;

  average = total / 2;

  printf("Average : %.2f\n", average);
  
  return 0;
}

