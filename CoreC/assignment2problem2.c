/* Rewrite the program (assignment2problem1.c), replacing the for loop with a combination of goto and if statements. 
The output of the program should stay the same. 
That is, the program should print out the arguments passed to it on the command line.  */

#include <stdio.h>

int main(int argc, char **argv) {
  int i = 1;
Loop:
  printf("%s\n", argv[i]);
  i++;
  if (i < argc)
    goto Loop;

  return 0;
}
