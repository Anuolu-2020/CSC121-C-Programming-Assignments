#include <stdio.h>

// How to program C Excercise 3.22
void checkPrime(int number) {
  if (number < 0) {
    puts("Number must be a positive integer");
  }
  if (number <= 1) {
    puts("Number must not be greater than 1");
  }

  if (number % 2 == 0 || number % 3 == 0) {
    printf("%i is not a prime number\n", number);
    return;
  }

  for (int i = 5; i * i <= number; i += 6) {

    if (number % i == 0 || number % (i + 2) == 0) {
      printf("%i is not a prime number\n", number);
      return;
    }
  }

  printf("%i is a prime number\n", number);
}

void testCase(int numbers[], int len) {
  for (int i = 0; i < len; i++) {
    checkPrime(numbers[i]);
  }
}

int main(void) {
  /*int number;
  printf("Input number: ");
  scanf("%i", &number);
  checkPrime(number);*/

  int arrayOfNumbers[] = {2,  3,  5,  7,  11, 13, 17, 19, 23, 29,
                          31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
                          73, 79, 83, 89, 97, 15, 12, 14, 16, 95};

  int len = sizeof(arrayOfNumbers) / sizeof(int);

  testCase(arrayOfNumbers, len);
}
