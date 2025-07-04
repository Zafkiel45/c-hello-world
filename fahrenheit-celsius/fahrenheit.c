#include <stdio.h>

int main() {
  float fahr, celsious;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower;
  printf("Fahrenheit --- Celsious\n");
  while(fahr <= upper) {
    celsious = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f\t%6.1f\n", fahr, celsious);
    fahr += step;
  };
}