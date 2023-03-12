/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1;
  int mark2;
  int total;
  float average;

  printf("Enter your mark for 1st Subject : ");
  scanf("%d", &mark1);

  printf("Enter your mark for 2nd Subject : ");
  scanf("%d", &mark2);

  total = mark1 + mark2;

  average = total / 2.0;

  printf("Your total mark is : %d", total);
  printf("Your average mark is : %.1f", average);

  return 0;
}

