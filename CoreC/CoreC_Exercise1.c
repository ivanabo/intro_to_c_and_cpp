/* Starting with an empty .c file, write a C program to calculate the first 100
 * triangular numbers (0, 1, 3, 6, 10, 15, 21, …) */

#include <stdio.h>

int main(void) {
  int i;

  for (i = 0; i < 100; i++) {
    printf("%d\n", i * (i + 1) / 2);
  }
  return 0;
}