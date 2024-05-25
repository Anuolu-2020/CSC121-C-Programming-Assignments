#include <stdio.h>

// How to program C Excercise 4.11
int main(void) {
  int sum = 0;
  for (int i = 0; i < 100; i += 7) {
    sum += i;
  }
  printf("The sum of multiples of 7 from 1 to 100 is: %i\n", sum);
}
