#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// How to program C Excercise 4.26
double calculateApproxPie(int iterator, int denominator,
                          double *currentPieValue) {
  double numerator = 4, term;

  if ((iterator + 1) % 2 != 0) {
    term = numerator / denominator;
    *currentPieValue += term;
    return *currentPieValue;
  } else {
    term = numerator / denominator;
    *currentPieValue -= term;
    return *currentPieValue;
  }
}

int main(void) {
  double pie = 0.0;
  int denominator = 1;
  double epsilon = 0.00001;

  bool approx314 = false;
  bool approx3141 = false;
  bool approx31415 = false;
  bool approx314159 = false;

  printf("Number of Terms\t\tApproximation of π\n");
  // Run a sufficient loop
  for (int i = 0; i < 100000; i++) {
    pie = calculateApproxPie(i, denominator, &pie);

    if (!approx314 && fabs(pie - 3.14) < epsilon) {
      printf("The %i-th term\t\t3.14\n", i + 1);
      approx314 = true;
    }
    if (!approx3141 && fabs(pie - 3.141) < epsilon) {
      printf("The %i-th term\t3.141\n", i + 1);
      approx3141 = true;
    }
    if (!approx31415 && fabs(pie - 3.1415) < epsilon) {
      printf("The %i-th term\t3.1415\n", i + 1);
      approx31415 = true;
    }
    if (!approx314159 && fabs(pie - 3.14159) < epsilon) {
      printf("The %i-th term\t3.14159\n", i + 1);
      approx314159 = true;
      break;
    }

    denominator += 2;
  }

  return 0;
}
