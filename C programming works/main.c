#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declare variables
  char name[25];
  float salary;

  // Prompt the user to enter their name
  printf("Please enter your name: ");
  scanf("%s", name); // This line stores the user's input into the 'name' variable

  // Prompt the user to enter their salary
  printf("Please enter your salary: ");
  scanf("%f", &salary); // This line stores the user's input into the 'salary' variable as a float value

  // Print a welcome message with the user's name and salary
  printf("Welcome %s to the ABC department. We are pleased to announce that the data you provided is accurate. Your salary is %f.", name, salary); // This line prints the formatted message using the stored values of 'name' and 'salary'

  // Return 0 to indicate successful program execution
  return 0;
}
