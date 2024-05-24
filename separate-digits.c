#include <stdio.h>

// How to program C Exercise 2.30

// First implementation
void separate1(void) {
  int number;
  printf("%s", "Input a five digits number: ");
  scanf("%i", &number);
  if (number < 10000 || number > 99999) {
    printf("%i not a five digits number.\n", number);
    return;
  }
  int firstDigit = (number / 10000) % 10;
  int secondDigit = (number / 1000) % 10;
  int thirdDigit = (number / 100) % 10;
  int fourthDigit = (number / 10) % 10;
  int fifthDigit = number % 10;

  printf("%i %i %i %i %i\n", firstDigit, secondDigit, thirdDigit, fourthDigit,
         fifthDigit);
}

// Second implementation
void separate2(void) {
  int number;
  printf("%s", "Input a five-digit number: ");
  scanf("%i", &number);

  if (number < 10000 || number > 99999) {
    printf("%i is not a five-digit number.\n", number);
    return;
  }

  char spacedNumbers[11];

  int iterator = 0;

  for (int i = 10000; i >= 1; i /= 10) {
    spacedNumbers[iterator] = '0' + (number / i) % 10;
    iterator += 1;
    spacedNumbers[iterator] = ' ';
    iterator += 1;
  }
  spacedNumbers[10] = '\0';

  printf("%s\n", spacedNumbers);
}

int main(void) {
  // separate1();
  separate2();
}
