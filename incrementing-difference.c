#include <stdio.h>

// How to program C Excerise 3.21
int main(void) {
  int variable = 3;

  printf("Difference between pre incrementing and post incrementing.\n");
  printf("\n");
  printf("Initial value of variable = %i\n", variable);
  printf("Using pre incrementing (++variable): %i\n", ++variable);
  printf("Value of variable after pre-increment: %i\n", variable);

  int variable2 = 3;
  // printf("%i\n", variable);
  printf("\n");
  printf("Initial value of variable2 = %i\n", variable2);
  printf("Using post incrementing (variable2++): %i\n", variable2++);
  printf("Value of variable2 after post-increment: %i\n", variable2);
}
