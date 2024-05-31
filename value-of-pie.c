#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// How to program C Excercise 4.26
double calculateApproxPie(int iterator, int denominator,
                          double *currentPieValue) {

  // Alternate addition and subtraction based on the term index
  if ((iterator) % 2 != 0) {
    *currentPieValue += 4.0 / denominator; // Add the term for even index
  } else {
    *currentPieValue -= 4.0 / denominator; // Subtract the term for odd index
  }

  return *currentPieValue; // Return the updated approximation
}

int main(void) {
  double pie = 0.0;         // Initialize the approximation of π
  int denominator = 1;      // Start with the first term denominator
  double epsilon = 0.00001; // Set the precision for comparison

  bool isApprox314 = false;
  bool isApprox3141 = false;
  bool isApprox31415 = false;
  bool isApprox314159 = false;

  printf("Number of Terms\t\tApproximation of π\n");
  // Run a sufficient number of loop
  for (int i = 1; i < 100000; i++) {
    pie = calculateApproxPie(i, denominator, &pie);

    // Check if the current approximation is close to 3.14 and not already
    // printed
    if (!isApprox314 && fabs(pie - 3.14) < epsilon) {
      printf("The %i-th term\t\t3.14\n", i);
      isApprox314 = true;
    }
    // Check if the current approximation is close to 3.141 and not already
    // printed
    if (!isApprox3141 && fabs(pie - 3.141) < epsilon) {
      printf("The %i-th term\t3.141\n", i);
      isApprox3141 = true;
    }
    // Check if the current approximation is close to 3.1415 and not already
    // printed
    if (!isApprox31415 && fabs(pie - 3.1415) < epsilon) {
      printf("The %i-th term\t3.1415\n", i);
      isApprox31415 = true;
    }
    // Check if the current approximation is close to 3.14159 and not already
    // printed
    if (!isApprox314159 && fabs(pie - 3.14159) < epsilon) {
      printf("The %i-th term\t3.14159\n", i);
      isApprox314159 = true;
      break;
    }

    denominator += 2; // Increment the denominator by 2 for the next term
  }

  return 0;
}
