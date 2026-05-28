#include <stdio.h>

int main() {
  float C;
  float F;
  printf("Write degree in C: ");
  scanf("%f", &C);

  F = (C * 9 / 5) + 32;
  printf("Degrees in Fahrenheit: %.2f\n", F);

  return 0;
}
