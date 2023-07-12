/* Program to print the text equivalent of a number to the terminal. This program does not work for numbers beginning or ending with a zero, to remedy this the program needs to be rewritten using a string of characters. Since the textbook does not cover strings until a later date this is probably not what the program should do. */

#include <stdio.h>

int main(void) {

  // Get number from the terminal
  int number;
  printf ("Enter number to process: ");
  scanf ("%d", &number);
  printf ("number: %d\n", number);

  // Reverse number
  int reverseNumber = 0;
  while (number > 0) {
    reverseNumber *= 10;
    reverseNumber += (number % 10);
    number /= 10;
  };
  
  printf ("reverseNumber:  %d\n", reverseNumber);
  // Print numbers in text
  do {
    switch (reverseNumber % 10) {
      case 0:
        printf ("zero  ");
        break;
      case 1:
        printf ("one  ");
        break;
      case 2:
        printf ("two  ");
        break;
      case 3:
        printf ("three  ");
        break;
      case 4:
        printf ("four  ");
        break;
      case 5:
        printf ("five  ");
        break;
      case 6:
        printf ("six  ");
        break;
      case 7:
        printf ("seven  ");
        break;
      case 8:
        printf ("eight  ");
        break;
      case 9:
        printf ("nine  ");
        break;
      default:
        printf ("Error: non-digit entered!  ");
    }
    reverseNumber /= 10;
  }  while (reverseNumber > 0);

  

  
  return 0;
}