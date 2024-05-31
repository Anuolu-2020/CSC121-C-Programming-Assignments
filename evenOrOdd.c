#include <stdio.h>

// How to program C Excercise 5.18
int isEven(int number) {
  if (number % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  printf("Is even or odd calculator\n");

  while (1) {
    int input;
    printf("Returns 1 if even or 0 otherwise\n");
    printf("Input number: ");
    scanf("%i", &input);
    printf("%i\n", isEven(input));
  }
}
