#include <stdio.h>

// How to program C Exercise 2.33

double calculateFuelCost(double totalMiles, double averageMilesPerGallon,
                         double costPerGallon) {
  return (totalMiles / averageMilesPerGallon) * costPerGallon;
}

double calculateDailyDrivingCost(double fuelCost, double parkingFees,
                                 double tollFees) {
  return fuelCost + parkingFees + tollFees;
}

double calculateSavings(double carpoolingFee, double dailyDrivingCost) {
  return carpoolingFee - dailyDrivingCost;
}

int main(void) {
  double totalMiles;
  double averageMilesPerGallon;
  double costPerGallon;
  double parkingFees;
  double tollFees;
  // double carpoolingFee;

  printf("Driving Daily Cost And Carpooling Savings Calulator.\n");
  printf("What's your total driving miles per day? ");
  scanf("%lf", &totalMiles);
  printf("What's your cost per gallon? ");
  scanf("%lf", &costPerGallon);
  printf("What's your car's average mile per gallon? ");
  scanf("%lf", &averageMilesPerGallon);
  printf("What's your car parking fee? ");
  scanf("%lf", &parkingFees);
  printf("What's your toll fee? ");
  scanf("%lf", &tollFees);

  double fuelCost =
      calculateFuelCost(totalMiles, averageMilesPerGallon, costPerGallon);

  double dailyDrivingCost =
      calculateDailyDrivingCost(fuelCost, parkingFees, tollFees);

  printf("Your daily driving cost is: %.2lf\n", dailyDrivingCost);
}
