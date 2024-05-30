#include <math.h>
#include <stdio.h>

double areaOfTriangle(double side1, double side2, double side3) {
  if ((side1 + side2) < side3) {
    puts("The sum of Side 1 and Side 2 must be greater than Side 3!");
    return 0;
  }
  if ((side2 + side3) < side1) {
    puts("The sum of Side 2 and Side 3 must be greater than Side 1!");
  }
  if ((side1 + side3) < side2) {
    puts("The sum of Side 1 and Side 3 must be greater than Side 2!");
    return 0;
  }

  /* Using Heron's Formula for finding the area of a triangle with it's three
 side length */
  double area =
      sqrt(4.0 * (side1 * side1) * (side2 * side2) -
           (((side1 * side1) + (side2 * side2) - (side3 * side3))) *
               (((side1 * side1) + (side2 * side2) - (side3 * side3)))) /
      4;

  return area;
}

int main(void) {
  double side1, side2, side3;

  printf("Three Side Length Triangle Area Calculator\n");
  printf("Input Side 1: ");
  scanf("%lf", &side1);
  printf("Input Side 2: ");
  scanf("%lf", &side2);
  printf("Input Side 3: ");
  scanf("%lf", &side3);

  double area = areaOfTriangle(side1, side2, side3);

  if (!area) {
    return 0;
  }

  printf("The area of the triangle is %.3lf\n", area);
}
