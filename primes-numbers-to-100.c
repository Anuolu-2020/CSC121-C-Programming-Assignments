#include <stdbool.h>
#include <stdio.h>

bool isPrime(int number) {

  if (number <= 1) {
    return false;
  }

  if (number <= 3) {
    return true;
  }

  if (number % 2 == 0 || number % 3 == 0) {
    return false;
  }

  for (int i = 5; i * i <= number; i += 6) {
    if (number % i == 0 || number % (i + 2) == 0)
      return false;
  }

  return true;
}

void printPrimeNumbers(int range) {
  printf("Prime numbers from 1 to %d:\n", range);
  for (int i = 2; i < range; i++) {
    if (isPrime(i)) {
      printf("%d\n", i);
    }
  }
}

int main(void) {
  printf("Prime numbers from 1 to 100: ");
  printPrimeNumbers(100);
}
